module keypad(
	row,column,value,enable,clk,rst
	);

output reg [2:0] column;
output reg [3:0] value; 
output reg enable;

input [3:0] row;
input clk,rst;

always@(posedge clk or negedge rst)
begin
	if(~rst)
		column <= 3'b101;
	// else 													// �Х��T�{�b�i��������e�A�Nkeypad module�̪��ʺA���y���ѱ�
	// 	column <= {column[1:0], column[2]};    // �N�O�����Ѫ��o���
end

always@(posedge clk or negedge rst)
begin
	if(~rst) begin
		value <= 4'b0;
		enable <= 0;
	end
	else begin
		case(column)
		3'b110 : begin
			case(row)
			4'b0111 : begin value <= 4'd11; enable <= 1; end
			4'b1011 : begin value <= 4'd9; enable <= 1; end
			4'b1101 : begin value <= 4'd6; enable <= 1; end
			4'b1110 : begin value <= 4'd3; enable <= 1; end
			default : begin value <= value; enable <= 0; end
			endcase
		end
		3'b101 : begin
			case(row)
			4'b0111 : begin value <= 4'd0 ; enable <= 1; end
			4'b1011 : begin value <= 4'd8; enable <= 1; end
			4'b1101 : begin value <= 4'd5; enable <= 1; end
			4'b1110 : begin value <= 4'd2; enable <= 1; end
			default : begin value <= value; enable <= 0; end
			endcase
		end	
		3'b011 : begin
			case(row)
			4'b0111 : begin value <= 4'd10; enable <= 1; end
			4'b1011 : begin value <= 4'd7; enable <= 1; end
			4'b1101 : begin value <= 4'd4; enable <= 1; end
			4'b1110 : begin value <= 4'd1; enable <= 1; end
			default : begin value <= value; enable <= 0; end
			endcase
		end
		default : begin value <= 4'd0; enable <= 0; end
		endcase
	end
end
endmodule
