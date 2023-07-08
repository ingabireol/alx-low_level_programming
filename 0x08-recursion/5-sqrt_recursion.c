#include "main.h"
/**
 * sqr2 - makes posssibles to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: square root of a
 */

int sqr2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqr2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: integer
 * Return: Square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sqr2(n, 1));
}

