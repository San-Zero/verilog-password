module count_down(
    cnt_down, alarm_enable, set2, trueIn, falseIn, clk, rst
    );

output reg alarm_enable;
output reg [3:0] cnt_down;
input set2, trueIn, falseIn, clk, rst;

always @(posedge clk or negedge rst) begin
    if(~rst) begin
        cnt_down = 4'd5;
        alarm_enable = 1'b0;
    end
    else begin
		if(set2)begin
            $display("%4dns: counter = %4d", $stime, cnt_down);
			if(cnt_down > 0 && ~(trueIn || falseIn))
				cnt_down = cnt_down - 1;
            else if(cnt_down == 0 && ~(trueIn || falseIn))
                alarm_enable = 1'b1;
            else 
                alarm_enable = alarm_enable;
		end	
	end
end

endmodule
