#include <stdio.h>
#include <assert.h>
#include "tests.h"
#include "struct.h"

int getQ(unsigned char C);

int main(int argc, char *argv[])
{
	/* input pins to LUT KEY
	1   = 0 100000
	2   = 1 010000
	4   = 2 001000
	8   = 3 000100
	16  = 4 000010
	32  = 5 000001

	Lookup table 0-127 (128 symbols) outputs LSB Q and !Q (via assert)
	*/

	// just for setup:
	//outputter();
	// debug ^^

	Lut lut6;
	const unsigned char MAXLUTIN = 252; // 000000** - 111111** inclusive.
	const unsigned char MAXLUTOUT = 2;  // ******00 - ******10 (so 01 and 10)
	unsigned char i = 0;
	for (i=0;i<=(MAXLUTIN+MAXLUTOUT);i++) {
		if (get_bit_from_char(i, 0) != get_bit_from_char(i,1)) {
			lut6.lut=i;			
			printf("%d\tQ=%d\tQ_PRIME=%d\t",lut6.lut,getQ(lut6.lut),!getQ(lut6.lut));
			printf("BINARY: ");
			outputter(i);
			
		}
	}	
	return 0;
}

int getQ(unsigned char C)
{
assert(get_bit_from_char(C, 0) != get_bit_from_char(C,1));
return(get_bit_from_char(C, 1));
}

