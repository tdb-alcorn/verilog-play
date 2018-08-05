// module Mux(A, B, S, OUT);

//     input A, B, S;
//     output OUT;

//     out = S ? A : B;

// endmodule

module counter(CONTROL, CLOCK, RESET, OUT);
    
    input CONTROL, CLOCK, RESET;
    output [7:0] OUT;
    reg [7:0] OUT;

    always @(posedge CLOCK) begin
        
        if (RESET) begin
            OUT <= 8'b0;
        end
        else if (CONTROL) begin
            OUT <= OUT + 1;
        end
        else begin
            OUT <= OUT - 1;
        end

    end

endmodule