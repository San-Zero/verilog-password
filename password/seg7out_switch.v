module seg7out_switch(
	seg7_selected, seg7outvalue, in0, in1, in2, in3, clk, rst
	);
	
output reg [3:0]seg7_selected,seg7outvalue;
input [3:0]in0,in1,in2,in3;
input clk,rst;

always @(posedge clk or negedge rst)begin
	if(~rst)
		seg7_selected<=4'b0111;
	else
		seg7_selected<={seg7_selected[2:0],seg7_selected[3]};
end	

always @(*)begin
	case(seg7_selected)
		4'b1110:seg7outvalue<=in0;
		4'b1101:seg7outvalue<=in1;
		4'b1011:seg7outvalue<=in2;
		4'b0111:seg7outvalue<=in3;
		default:seg7outvalue<=4'd0;
	endcase
end

endmodule