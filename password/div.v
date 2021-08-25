module div(divclk_1, divclk_2, div_ledmatrix, clk, rst);

output divclk_1, divclk_2, div_ledmatrix;
input clk,rst;
reg [25:0]divclkcnt;

assign divclk_1 = divclkcnt[0]; //2^i+1
assign divclk_2 = divclkcnt[2]; //2^i+1
assign div_ledmatrix = divclkcnt[0]; //2^i+1

always@(posedge clk or negedge rst)begin
    if(~rst)
        divclkcnt = 0;
    else
        divclkcnt = divclkcnt + 1;
end

endmodule
