module lights_control( 
    green, red, yellow, trueIn, falseIn, enable, clk, rst
    );

output reg green, red, yellow;
input trueIn, falseIn, enable, clk, rst;

always @(posedge clk or negedge rst) begin
    if(~rst)begin
        $display("%4dns: green=%d, red=%d, yellow=%d", $stime, green, red, yellow);
        green = 1'b0;
        red = 1'b1;
        yellow = 1'b0;
    end
    else if ( trueIn == 1'b1 && falseIn == 1'b0)begin
        $display("%4dns: green=%d, red=%d, yellow=%d", $stime, green, red, yellow); 
        green = 1'b1;
        red = 1'b0;
        yellow = 1'b0;
    end
    else if (enable)begin
        $display("%4dns: green=%d, red=%d, yellow=%d", $stime, green, red, yellow);        
        green = 1'b0;
        red = 1'b0;
        yellow = 1'b1;
    end
    else begin    
        $display("%4dns: green=%d, red=%d, yellow=%d", $stime, green, red, yellow);    
        green = green;
        red = red;
        yellow = yellow;
    end    
end

endmodule
