module led_matrix(
	row, column, count_down, counter, switch,
	clk, rst
	);

output reg [7:0] row, column;

input switch, clk, rst;
input [3:0] count_down, counter;

reg [3:0] state;
assign displaySwitch = ~switch;

parameter one = 4'd1, two = 4'd2, three = 4'd3, four = 4'd4, five = 4'd5;

always@(posedge clk or negedge rst)
begin
	if(~rst)begin
		state <= 4'd0;
		row <= 8'b1111_1110;
	end
	else begin
		row <= {row[6:0], row[7]};
		if(displaySwitch) 
			state <= count_down;
		else  
			state <= counter;
	end
end

// always@(posedge clk or negedge rst) // error: xst899 
// begin
// 	if(displaySwitch) 
// 		state = count_down;
// 	else 
// 		state = counter;
// end




always@(row,state)
begin
	if(state == one)begin
		case(row)
		8'b0111_1111 : column <= ~8'b00001000;
		8'b1011_1111 : column <= ~8'b00011000;
		8'b1101_1111 : column <= ~8'b00001000;
		8'b1110_1111 : column <= ~8'b00001000;
		8'b1111_0111 : column <= ~8'b00001000;
		8'b1111_1011 : column <= ~8'b00001000;
		8'b1111_1101 : column <= ~8'b00001000;
		8'b1111_1110 : column <= ~8'b00011100;
		default : column <= 8'b0;
		endcase
	end	
	else if(state == two) begin
		case(row)
		8'b0111_1111 : column <= ~8'b00111000;
		8'b1011_1111 : column <= ~8'b01000100;
		8'b1101_1111 : column <= ~8'b00000100;
		8'b1110_1111 : column <= ~8'b00000100;
		8'b1111_0111 : column <= ~8'b00111000;
		8'b1111_1011 : column <= ~8'b01000000;
		8'b1111_1101 : column <= ~8'b01000000;
		8'b1111_1110 : column <= ~8'b01111100;
		default : column <= 8'b0;
		endcase
	end	
	else if(state == three) begin
		case(row)
		8'b0111_1111 : column <= ~8'b00111110;
		8'b1011_1111 : column <= ~8'b00000010;
		8'b1101_1111 : column <= ~8'b00000100;
		8'b1110_1111 : column <= ~8'b00001100;
		8'b1111_0111 : column <= ~8'b00000010;
		8'b1111_1011 : column <= ~8'b00000010;
		8'b1111_1101 : column <= ~8'b00100010;
		8'b1111_1110 : column <= ~8'b00011100;
		default : column <= 8'b0;
		endcase
	end	
	else if(state == four) begin
		case(row)
		8'b0111_1111 : column <= ~8'b00100100;
		8'b1011_1111 : column <= ~8'b00100100;
		8'b1101_1111 : column <= ~8'b00100100;
		8'b1110_1111 : column <= ~8'b00100100;
		8'b1111_0111 : column <= ~8'b00111110;
		8'b1111_1011 : column <= ~8'b00000100;
		8'b1111_1101 : column <= ~8'b00000100;
		8'b1111_1110 : column <= ~8'b00000100;
		default : column <= 8'b0;
		endcase
	end	
	else if(state == five) begin
		case(row)
		8'b0111_1111 : column <= ~8'b00111110;
		8'b1011_1111 : column <= ~8'b00100000;
		8'b1101_1111 : column <= ~8'b00100000;
		8'b1110_1111 : column <= ~8'b00111100;
		8'b1111_0111 : column <= ~8'b00000010;
		8'b1111_1011 : column <= ~8'b00000010;
		8'b1111_1101 : column <= ~8'b00100010;
		8'b1111_1110 : column <= ~8'b00011100;
		default : column <= 8'b0;
		endcase
	end		
	else  begin
		case(row)
		8'b0111_1111 : column <= ~8'b11111111;
		8'b1011_1111 : column <= ~8'b10000001;
		8'b1101_1111 : column <= ~8'b10000001;
		8'b1110_1111 : column <= ~8'b10000001;
		8'b1111_0111 : column <= ~8'b10000001;
		8'b1111_1011 : column <= ~8'b10000001;
		8'b1111_1101 : column <= ~8'b10000001;
		8'b1111_1110 : column <= ~8'b11111111;
		default : column <= 8'b0;
		endcase
	end
end		
endmodule	