`timescale 1ns / 1ps
module set_password( 
    pwd0, pwd1, pwd2, pwd3, set1, keyValue, enable, clk, rst
    );

output [3:0] pwd3, pwd2, pwd1, pwd0;

input [3:0] keyValue;
input set1, enable, clk, rst;

reg [2:0] count;
reg [3:0] buffer[3:0];

reg [3:0] pwdStorage[3:0];
assign pwd3 = pwdStorage[3];
assign pwd2 = pwdStorage[2];
assign pwd1 = pwdStorage[1];
assign pwd0 = pwdStorage[0];


integer i;
always @(posedge clk or negedge rst) begin
    if (~rst)begin
        count = 3'd0;
        for (i = 0; i < 4 ; i = i + 1 )begin
            buffer[i] = 4'd0;
        end
    end
    else begin
        if(set1)begin
            if(enable)begin
                buffer[count] = keyValue;
                pwdStorage[count] = buffer[count];
                count = count + 1;
                $display("%4dns: pwd0 = %4d, pwd1 = %4d, pwd2 = %4d, pwd3 = %4d",
                    $stime, pwd0, pwd1, pwd2, pwd3);
            end
        end
    end
end


endmodule
