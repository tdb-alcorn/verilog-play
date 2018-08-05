module state (CLOCK, WRITE, DATA, OUT);

    input CLOCK, WRITE, DATA;
    output reg OUT;

    always @(posedge CLOCK) begin

        if (WRITE) begin
            OUT <= DATA;
        end

    end

endmodule