#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function
 * Description: Adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function
 * Description: Substract two integers
 * @a: the first integer
 * @b: the second integer
 * Return: substract
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function
 * Description: Multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function
 * Description: Divides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function
 * Description: Computes the reminder of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: Remainder of the divisive number
 */
int op_mod(int a, int b)
{
	return (a % b);
}
