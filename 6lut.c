#include <stdio.h>
#include <assert.h>
#include "tests.h"
#include "struct.h"

int getQ(unsigned char C);

int main(int argc, char *argv[])
{
	/*
	1   = 0 000001
	2   = 1 000010
	4   = 2 000100
	8   = 3 001000
	16  = 4 010000
	32  = 5 100000

	Lookup table 0-127 (128 symbols) outputs LSB Q and !Q (via assert)
	*/

	// just for setup:
	//outputter();
	// debug ^^

	Lut lut6;
	const unsigned char MAXLUTIN = 252; // 000000** - 111111** inclusive.
	const unsigned char MAXLUTOUT = 2;  // ******00 - ******10 (so 01 and 10)
	unsigned char i = 0;
	for (;i<=(MAXLUTIN+MAXLUTOUT);i++) {
		if (get_bit_from_char(i, 0) != get_bit_from_char(i,1)) {
			lut6.lut=i;			
			printf("%d - Q=%d  - Q_PRIME=%d\n",lut6.lut,getQ(lut6.lut),!getQ(lut6.lut));
		}
	}	
	return 0;
}

int getQ(unsigned char C)
{
assert(get_bit_from_char(C, 1) != get_bit_from_char(C,0)); // guarantees that the output is never indeterminate
return(get_bit_from_char(C, 1));
}

