	/*
	 * math.c
	 *
	 *  Created on: Sept 6, 2017
	 * 	Last Edited: Sept 13, 2017
	 *      Author: Ryan Hare
	 */

#include <stdio.h>
#include "math.h" //Include the math header

int math(int num1, int num2, char Operator); //Initialize the math function

int main()
{
    int result1; //Create a test integer.
    result1 = math(1,2,'+'); //Do a test math function with each operator and print the result.
    printf("1 + 2 = %d \n", result1);
	result1 = math(2,1,'-');
	printf("2 - 1 = %d \n", result1);
	result1 = math(2,4,'*');
	printf("2 * 4 = %d \n", result1);
	result1 = math(4,2,'/');
	printf("4 / 2 = %d \n", result1);
	result1 = math(12,3,'%');
	printf("12 % 3 = %d \n", result1);
	return 0;
}


int math(int num1, int num2, char Operator){ //Math function
	
	int result; //Create a result integer.
	
	if (Operator == '+') //If the operator is plus, do addition.
		result = num1 + num2;
	else if (Operator == '-') //If operator is minus, do subtraction.
		result = num1 - num2;
	else if (Operator == '*') //If operator is asterisk, do multiplication.
		result = num1 * num2;
	else if (Operator == '/') //If operator is slash, do division.
		result = num1 / num2;
	else if (Operator == '%') //If operator is percent, do modulus.
		result = num1 % num2;
	else //If the operator doesn't match, return zero.
		result = 0;
	
	return result; //Return the result.
}