# Lab 1 Code

## The math function

math.c implements a single function, math. The math function takes two integers as input and applies a char operator to the two integers. The inputs are given as
math(int, int, char). The char input can be one of the following:

1. '+' for addition.
2. '-' for subtraction.
3. '*' for multiplication.
4. '/' for division.
5. '%' for modulus.

The operator will then take the two integers and apply the specified operation to them. The function will then return the output of the specified math operation.
For example, math(8, 2, '/') will return '4', which is the result of '8 / 2'.

The math function will also return zero if an invalid char operator is entered.