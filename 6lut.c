#include <stdio.h>

int get_bit_from_char( unsigned char input8Bits, int bit_absolute);
void outputter();

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
	outputter();

	return 0;
}

/* this doesn't really do anything, it's just part of unit testing
// but i found most of this on stack
*/
int get_bit_from_char( unsigned char input8Bits, int bit)
{
	unsigned char t = input8Bits & ( 1 << bit ); // shifts a "1" into bit position (mask) 01000000 and ANDs it.
	t >>= bit ;   // we need to shift right bit bits otherwise we just get a bitmask back rather than a number.
	//printf("foo: %d", (int)t);
	//printf("returning %d", t);
	return (int)t;
}

void outputter()
{
	unsigned char   i,j = 0;      // 0-255
	unsigned char forPrinting[8]; // contains the binary seqeunces as a string
	int q = 0; //just a loop var
	for (i=0;i<256;i++)
	{
		for(j=0;j<=7;j++) // c needs <=. I wish there were a standard!
		{
			forPrinting[j] = get_bit_from_char(i,j) + '0'; // adding '0' makes that printable char
		}
		for (q=0; q<=7; q++) printf("%c",forPrinting[q]); // this breaks endianness
		printf("\t%d\t",i);
		for (q=7; q>=0; q--) printf("%c",forPrinting[q]); // this should be correct
		puts("\n");
	}
}

