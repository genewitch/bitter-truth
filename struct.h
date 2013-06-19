typedef struct
{
	unsigned char lut;
	int pinouts[2];
	int pinins[6];
} Lut;
/***************************************************
so i read that you can do structs one of two ways.

1:
struct Lut
{
	unsigned char lut;
	int pinouts[2];
	int pinins[6];
}; //<- semicolon!!
|||||||||||OR|||||||||||||||
2:
typedef struct
{
	unsigned char lut;
	int pinouts[2];
	int pinins[6];
} Lut; //<-semicolon!

So with 1;
struct Lut lut6; // to instantiate or invoke or whatever.

However, with 2;
Lut lut6;
-- you can use it like you can in other languages (coughnetco..ugh.)

I don't know if there's a reason to not use typedef struct that i'll 
run in to anytime soon.

Excuse my inconsistent bracketing throughout these files!
As i read through more academic media you can tell there's
still a war going on. I don't really want to pick a side,
But that usually means annoying everyone!

ref: http://www.cs.usfca.edu/~wolber/SoftwareDev/C/CStructs.htm
**************************************************************/



