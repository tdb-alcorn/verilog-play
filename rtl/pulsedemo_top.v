module pulsedemo_top (CLOCK, PULSE, PULSE2);
    input CLOCK;
    output PULSE, PULSE2;
    
    reg [10:0]  counter = 'd0;
    reg         pulse_int = 'b0;
    reg         pulse2_int = 'b0;
    
    always @(posedge CLOCK) begin
        
        counter <= counter + 'd1;
        pulse_int <= 'b1;
        
        if (counter > 'd6) begin
            pulse_int <= 'b0;
        end

        if (counter > 'd800) begin
            counter <= 'd0;
        end

    end

    always @(posedge CLOCK) begin
        pulse2_int <= 'b0;

        if (counter > 'd500) begin
            pulse2_int <= 'b1;
        end
    end

    assign PULSE = pulse_int;
    assign PULSE2 = pulse2_int;

endmodule