	/*
	 * math.c
	 *
	 *  Created on: Sept 6, 2017
	 * 	Last Edited: Sept 13, 2017
	 *      Author: Ryan Hare
	 *  
	 *  The following code implements a math function. The math function takes an input of (int, int, char). The integers are the numbers
	 *  that the operator is performed on. For example, math(2, 3, '+') would add 2 + 3. The char can be '+' for addition, '-' for subtraction, 
	 *  '*' for multiplication, '/' for division, or '%' for modulus. If an invalid char is entered, the function returns 0.
	 * 
	 */

#include <stdio.h>
#include "math.h" //Include the math header

int math(int num1, int num2, char Operator); //Initialize the math function

int main()
{
    int result1; //Create a test integer.
	
	//Do a test math function with each operator and print the result.
    result1 = math(1,2,'+'); //Test addition.
    printf("1 + 2 = %d \n", result1); //Output result of addition.
	result1 = math(2,1,'-'); //Test subtraction.
	printf("2 - 1 = %d \n", result1); //Output result of subtraction.
	result1 = math(2,4,'*'); //Test multiplication.
	printf("2 * 4 = %d \n", result1); //Output result of multiplication.
	result1 = math(4,2,'/'); //Test division.
	printf("4 / 2 = %d \n", result1); //Output result of division.
	result1 = math(10,3,'%'); //Test modulus.
	printf("10 % 3 = %d \n", result1); //Output result of modulus.
	return 0;
}


int math(int num1, int num2, char Operator){ //Math function
	
	int result; //Create a result integer.
	
	switch(Operator) { //Use a switch statement to determine which operation to perform.
		case '+' : //When the operator is '+',
			result = num1 + num2; //return the sum of num1 and num2.
			break;
		case '-' : //When the operator is '-',
			result = num1 - num2; //return the difference of num1 and num2.
			break;
		case '/' : //When the operator is '/',
			result = num1 / num2; //return the quotient of num1 and num2.
			break;
		case '*' : //When the operator is '*',
			result = num1 * num2; //return the product of num1 and num2.
			break;
		case '%' : //When the operator is '%',
			result = num1 % num2; //return the remainder of num1 divided by num2.
			break;
		default: //If the operator doesn't match any other forms,
			result = 0; //return 0.
	}
	
	return result; //Return the result.
}