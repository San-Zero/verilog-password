`timescale 1ns / 1ps
module Password_tb;

	// Inputs
	reg clk;
	reg rst;
	reg set1;
	reg set2;
	reg set3;
	reg [3:0] row;
	reg [2:0] column;
	
	// Outputs
	wire [3:0] k_value; 
	wire enable;
	wire [7:0] ledrow;
	wire [7:0] ledcolumn;
	wire [7:0] seg7_out;
	wire [3:0] seg7_select;
	wire green;
	wire red;
	wire yellow;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clk(clk), 
		.rst(rst), 
		.set1(set1), 
		.set2(set2), 
		.set3(set3), 
		.row(row), 
		.column(column), 
		.k_value(k_value), 
		.enable(enable), 
		.ledrow(ledrow), 
		.ledcolumn(ledcolumn), 
		.seg7_out(seg7_out), 
		.seg7_select(seg7_select), 
		.green(green), 
		.red(red), 
		.yellow(yellow)
	);

	initial begin
		clk = 0;
		forever #5 clk=~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		set1 = 0;
		set2 = 0;
		set3 = 0;
		row = 0;
		column = 0;

		// Wait 100 ns for global reset to finish
		

		// setting password
		#50 	rst = 1;
					set1 = 1;
					set2 = 0;
					set3 = 0;
		#20 	column = 3'b101; row = 4'b1110;	//2 enable = 1
		//#50   row = 0; //enable = 0
		#20 	column = 3'b101; row = 4'b1101;	//5	enable = 1
		//#50   row = 0; //enable = 0
		#20 	column = 3'b101; row = 4'b1011;	//8	enable = 1
		//#50   row = 0; //enable = 0
		#20		column = 3'b101; row = 4'b0111;	//0	enable = 1
		#50   row = 0; //enable = 0
		
		// comfirm password--correct
		#100 	set1 = 0;
					set2 = 1;
					set3 = 0;
		#20 	column = 3'b101; row = 4'b1110;	//2 enable = 1
		#50   row = 0; //enable = 0
		#10 	column = 3'b101; row = 4'b1110;	//2 enable = 1, for the wrong input 
		#50   row = 0; //enable = 0
		// #10 	column = 3'b101; row = 4'b1101;	//5	enable = 1, for the correct input 
		// #50   row = 0; //enable = 0
		#10 	column = 3'b101; row = 4'b1011;	//8	enable = 1
		#50   row = 0; //enable = 0 
		#10		column = 3'b101; row = 4'b0111;	//0	enable = 1
		#50   row = 0; //enable = 0

		

	end
      
endmodule

