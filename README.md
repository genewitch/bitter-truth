bitter-truth
============
A C project to show why i dislike not having a primative boolean type.
I am not a C programmer.

I've been compiling this on gcc 4.6.3 (or higher) x86_64.

INSTALL:
gcc -g -Wall *.c -o 6lut

I'm not going for speed - right now i am going for zero warnings, and zero unsupressed valgrind errors.
If you have any input, especially about the endianness and how i can convert back and forth.
Once upon a time i heard about a simple algorithm to swap endianness with a byte block size.
i-(i%8)
or something like that. xor bitmask flipping and whatnot.

TODO:
utils for getting statistics i need to cache the everloving out of this.

This is specifically being designed by me in bits and parts, with very little reliance on templates.
I learned how to split the files up.
I know essentially how to make a Makefile, but i haven't done one yet for this project!
Learning is what this is about, right now. so TODO:
Learn more.
