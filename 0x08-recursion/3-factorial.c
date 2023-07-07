#include "main.h"
/**
 * factorial - returns the dactorial of a given number
 * @n: interger
 * Return: Factoria; pf numebr
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
