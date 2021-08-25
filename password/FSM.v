module FSM (
  trueOut, falseOut, inputCnt, out0, out1, out2, out3,
  in0, in1, in2, in3, set2, keyEvent,keyValue, clk, rst
);
  
output [3:0] out0, out1, out2, out3, inputCnt;
output reg trueOut, falseOut;

input [3:0] keyValue;
input [3:0] in0, in1, in2, in3;
input set2, keyEvent, clk, rst;

reg [2:0] keyCount, state, inputCnt;
reg [3:0] buffer[3:0];
assign out0 = buffer[0];
assign out1 = buffer[1];
assign out2 = buffer[2];
assign out3 = buffer[3];

integer i;
parameter init = 3'd0, waitKey = 3'd1, checkInput = 3'd2, 
  checkKey = 3'd3, true = 3'd4, false = 3'd5;

//----Meely----
always @(posedge clk or negedge rst) begin
  if(~rst)begin
    state <= init;
    keyCount = 3'd0;
    inputCnt = 4'd0;
    for (i = 0; i < 4; i = i + 1 ) begin
      buffer[i] = 4'd0;
    end
  end
  else if(set2) begin
    // $display("%4dns: in0 = %4d, in1 = %4d, in2 = %4d, in3 = %4d",
    //                 $stime, in0, in1, in2, in3);
    case(state)
      init:begin
        state <= waitKey;
      end
      waitKey:begin
        if(keyEvent == 1)begin
          buffer[keyCount] = keyValue;
          keyCount = keyCount + 1;
          state <= checkInput;
        end
      end
      checkInput:begin
        $display("%4dns: keyCount = %4d", $stime, keyCount);
        if (keyCount == 4) begin
          state <= checkKey;
        end
        else if (keyCount < 4 && keyEvent == 0) begin
          state <= waitKey;
        end
        else state <= checkInput;
      end
      checkKey:begin
          $display("%4dns: out0 = %4d, out1 = %4d, out2 = %4d, out3 = %4d",
                    $stime, out0, out1, out2, out3);
          if (
              buffer[3] == in3 &&  
              buffer[2] == in2 && 
              buffer[1] == in1 &&
              buffer[0] == in0 
          ) begin
            $display("True");
            state <= true;
          end
          else begin
            $display("False");
            state <= false;
            inputCnt = inputCnt + 1;
            $display("%4dns: inputCnt = %4d", $stime, inputCnt);
          end
      end
    endcase
  end
  
end

//----Moore----
always @(state) begin
  case(state)
    true:begin
      trueOut <= 1;
      falseOut <= 0;
    end
    false:begin
      trueOut <= 0;
      falseOut <= 1;
    end
    default:begin
      trueOut <= 0;
      falseOut <= 0;
    end
  endcase
end
endmodule
