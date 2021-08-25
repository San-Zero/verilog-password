`timescale 1ns / 1ps
module Top(
    clk, rst, set1, set2, set3, row, column, k_value, enable, 
    ledrow, ledcolumn, seg7_out, seg7_select, 
    green, red, yellow
    );
    
output enable, green, red, yellow;
output [2:0] column;
output [3:0] k_value, seg7_select;
output [7:0] ledrow, ledcolumn, seg7_out;

input clk, rst, set1, set2, set3;
input [3:0] row;

wire divclk_1, divclk_2,div_ledmatrix, enable, true, false, alarm_enable;
wire [3:0] cnt_down;

wire [3:0]  selected, inputCnt, 
            pwd0, pwd1, pwd2, pwd3, 
            k_pwd0, k_pwd1, k_pwd2, k_pwd3;


div div_1(divclk_1, divclk_2, div_ledmatrix, clk, rst);
keypad keypad_1(row, column, k_value, enable, divclk_1, rst);
count_down count_down_1(
    cnt_down, alarm_enable, set2, true, false, divclk_2, rst
    );

set_password set_password_1(
    pwd0, pwd1, pwd2, pwd3, set1, k_value, enable, divclk_1, rst
    );

FSM FSM_1 (
    true, false, inputCnt, k_pwd0, k_pwd1, k_pwd2, k_pwd3,
    pwd0, pwd1, pwd2, pwd3, set2, enable, k_value,
    divclk_1, rst
    );

lights_control lights_control_1(
    green, red, yellow, true, false, alarm_enable,
    divclk_1, rst
);
led_matrix led_matrix_1(
    ledrow, ledcolumn, cnt_down, inputCnt, set3, div_ledmatrix, rst
    );

seg7 seg7_1(seg7_out, selected);

seg7out_switch seg7out_switch_1(
    seg7_select, selected, k_pwd0, k_pwd1, k_pwd2, k_pwd3, 
    divclk_1, rst
    );


endmodule
