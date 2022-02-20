module Multiplexer (
	// Inputs.
  	input in_1,
	input in_2,
	input in_3,
	input in_4,
	input in_5,
	input in_6,
	input in_7,
	input in_8,
	input in_9,
	input in_10,
	input s_1,
	input s_2,
	input s_3,
	input s_4,
 
  	// Outputs.
  	output out
);
	
	// Description of the logic goes here.
    	wire s_1_not;
	wire s_2_not;
	wire s_3_not;
	wire s_4_not;
    	wire i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;

    	assign s_1_not = ~s_1;
	assign s_2_not = ~s_2;
	assign s_3_not = ~s_3;
	assign s_4_not = ~s_4;

    	// Let's describe circuit for sum.
    	assign i1 = s_4_not & s_3_not & s_2_not & s_1_not & in_1;
    	assign i2 = s_4_not & s_3_not & s_2_not & s_1 & in_2;
    	assign i3 = s_4_not & s_3_not & s_2 & s_1_not & in_3;
    	assign i4 = s_4_not & s_3_not & s_2 & s_1 & in_4;
    	assign i5 = s_4_not & s_3 & s_2_not & s_1_not & in_5;
    	assign i6 = s_4_not & s_3 & s_2_not & s_1 & in_6;
    	assign i7 = s_4_not & s_3 & s_2 & s_1_not & in_7;
    	assign i8 = s_4_not & s_3 & s_2 & s_1 & in_8;
    	assign i9 = s_4 & s_3_not & s_2_not & s_1_not & in_9;
    	assign i10 = s_4 & s_3_not & s_2_not & s_1 & in_10;

    	// Carry out description.
    	assign out = i1 | i2 | i3 | i4 | i5 | i6 | i7 | i8 | i9 | i10;

endmodule