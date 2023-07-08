#include "main.h"
/**
 * check - allows to iterate from 2 to n
 * @a: same numbe as n
 * @b: iterate from 2 to n
 * Return: 0 or 1
 */

int check(int a, int b)
{
	if (a <= 1)
		return (0);
	else if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (check(a, b + 1));
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: integer
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}


