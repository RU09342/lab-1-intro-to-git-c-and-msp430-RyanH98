#include <stdio.h>
#include "math.h"

int math(int num1, int num2, char Operator);

int main()
{
    int result1;
    result1 = math(1,2,'+');
    printf("1 + 2 = %d \n", result1);
	return 0;
}

int math(int num1, int num2, char Operator){
	
	int result;
	
	if (Operator == '+')
		result = num1 + num2;
	else if (Operator == '-')
		result = num1 - num2;
	else if (Operator == '*')
		result = num1 * num2;
	else if (Operator == '/')
		result = num1 / num2;
	else if (Operator == '%')
		result = num1 % num2;
	else
		result = 0;
	
	return result;
}