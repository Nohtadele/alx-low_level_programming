#include "main.h"
int _sqrt(int num, int root);

/**
 * _sqrt_recursion - function
 * Description: finds the natural square root of a number
 * @n: number to square root
 * Return: value of square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n));
}

/**
 * _sqrt - function
 * Desription: Calculates the square root of a number
 * @num: number to be calculated
 * @root: checker number
 * Return: value of square root
 */
int _sqrt(int num, int root)
{
	if (root <=0 )
		return (-1);
	if (num == root * root)
		return (root);
	root--;
	return (_sqrt(num, root));
}
