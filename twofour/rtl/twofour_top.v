module twofour (N, I);

    input [2:0] N;
    output [4:0] I;

    always @(N) begin
        I = 0;
        case (N)
            0: I = 'b0001;    
            1: I = 'b0010;    
            2: I = 'b0100;    
            3: I = 'b1000;    
        endcase
    end

endmodule