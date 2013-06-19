#include <stdio.h>
#include "tests.h"
#include <assert.h>

int get_bit_from_char( unsigned char input8Bits, int bit)
{
	assert(bit <= 8);
	unsigned char t = input8Bits & ( 1 << bit ); // shifts a "1" into bit position (mask) 01000000 and ANDs it.
	t >>= bit ;   // we need to shift right bit bits otherwise we just get a bitmask back rather than a number.
	//printf("foo: %d", (int)t);
	//printf("returning %d", t);
	assert((int)t == 0 || (int)t == 1);	
	return (int)t;
}

void outputter(unsigned char bite)
{
	unsigned char   j = 0;      // 0-255
	unsigned char forPrinting[8]; // contains the binary seqeunces as a string
	int q = 0; //just a loop var
	for(j=0;j<8;j++) 
		{
			forPrinting[j] = get_bit_from_char(bite,j) + '0';  // adding '0' makes that printable char
		}

		for (q=0; q<=7; q++) printf("%c",forPrinting[q]); // this breaks endianness

		printf("E\t%d\te",bite);

		for (q=7; q>=0; q--) printf("%c",forPrinting[q]); // this should be correct

		puts("\n");
}

