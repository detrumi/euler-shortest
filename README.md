euler-shortest
==============

Solutions to Project Euler problems, with the goal of solving each problem with the shortest possible C program.

Compile flags
-------------
I use clang, but gcc seems to work fine too
- -w flag to avoid warnings
- -lm for math functions

Example:

	clang -w -lm problems/problem1.c


Program shortening techniques
-----------------------------
- No whitespace
- Global variables, the main function and function parameters default to int, so omit the type
- You can use functions of standard headers without including them
- For loops are your friend; pack everything in them
- Program performance is less important than program length
- The first parameter of main is initialized to 1 (argc with only program name)

Shortening transformations
--------------------------
	1000            ==>    1E3               (Others: 999, 0xab)
	n != 1          ==>    n ^ 1
	!(i == 1)       ==>    !(i - 1)
	for(a=1;a;a++)  ==>    for(a=0;a++;)