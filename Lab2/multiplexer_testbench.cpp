// Verilator generated library/class.
#include "VMultiplexer.h"

// Verilator libraries.
#include "verilated.h"
#include "verilated_vcd_c.h"


// C++ libraries.
#include <iostream>

int main()
{
    	VMultiplexer* design_under_test = new VMultiplexer();
	
    	// Tracing ON / DUMP VCD.
    	Verilated::traceEverOn(true);
    	VerilatedVcdC* tfp = new VerilatedVcdC;
    	design_under_test->trace(tfp, 99);
    	tfp->open("multiplexer.vcd");

        
	int s_1 = rand() % 2;
        int s_2 = rand() % 2;
	int s_3 = rand() % 2;
	int s_4 = rand() % 2;

	if (s_4 == 1) {
		int s_3 = 0;
		int s_2 = 0;
	} 

    	// Feed data to DUT.
    	design_under_test->s_1 = s_1 & 1;
    	design_under_test->s_2 = s_2 & 1;
    	design_under_test->s_3 = s_3 & 1;
    	design_under_test->s_4 = s_4 & 1;

    	for (int i = 0; i < 8; i++){
	
		int in_1 = rand() % 2;
		int in_2 = rand() % 2;
		int in_3 = rand() % 2;
		int in_4 = rand() % 2;
		int in_5 = rand() % 2;
		int in_6 = rand() % 2;
		int in_7 = rand() % 2;
		int in_8 = rand() % 2;
		int in_9 = rand() % 2;
		int in_10 = rand() % 2;

    		// Feed data to DUT.
    		design_under_test->in_1 = in_1 & 1;
    		design_under_test->in_2 = in_1 & 1;
    		design_under_test->in_3 = in_1 & 1;
    		design_under_test->in_4 = in_1 & 1;
    		design_under_test->in_5 = in_1 & 1;
    		design_under_test->in_6 = in_1 & 1;
    		design_under_test->in_7 = in_1 & 1;
    		design_under_test->in_8 = in_1 & 1;
    		design_under_test->in_9 = in_1 & 1;
    		design_under_test->in_10 = in_1 & 1;

		// Model the behavior of the DUT.
		int expected_out = ((!s_4)&(!s_3)&(!s_2)&(!s_1)&(in_1))|((!s_4)&(!s_3)&(!s_2)&(s_1)&(in_2))|((!s_4)&(!s_3)&(s_2)&(!s_1)&(in_3))|((!s_4)&(!s_3)&(s_2)&(s_1)&(in_4))|((!s_4)&(s_3)&(!s_2)&(!s_1)&(in_5))|((!s_4)&(s_3)&(!s_2)&(s_1)&(in_6))|((!s_4)&(s_3)&(s_2)&(!s_1)&(in_7))|((!s_4)&(s_3)&(s_2)&(s_1)&(in_8))|((s_4)&(!s_3)&(!s_2)&(!s_1)&(in_9))|((s_4)&(!s_3)&(!s_2)&(s_1)&(in_10));
	
		// Simulate/evaluate/progress time.
    		design_under_test->eval();
    		tfp->dump(i);
    		design_under_test->eval();
		tfp->dump(i+1);

 	   	// Compare results.
    		int out = ((int)design_under_test->out) & 1;

	    	bool out_success = (out == expected_out);

	    	if (out_success)
    		{
      		std::cout << "Test passed!" << std::endl;
    		}
    		else
    		{
      		std::cout << "Test failed :(" << std::endl;
      		std::cout << out << std::endl;
      		std::cout << s_4 << s_3 << s_2 << s_1 << std::endl;
    		}
    	}
   	tfp->close();
    	return 0;
}