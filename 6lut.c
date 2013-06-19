#include <stdio.h>
#include "tests.h"

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

