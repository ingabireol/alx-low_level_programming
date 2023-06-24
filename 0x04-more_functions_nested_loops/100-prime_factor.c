#include <stdio.h>

long int prime(long int n);
int prime_check(long int num);

/**
 * main - prints largest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int n, num;

	num = 612852475143;
	n = prime(num);
	printf("%ld\n", n);
	return (0);
}

/**
 * prime - Finds prime factors for a number
 * @n: number
 * Return: void
 */

long int prime(long int n)
{
	long int i, j = 0;

	for (i = 2; i < n + 2;)
	{
		if ((n % i == 0) && (prime_check(i) == 1))
		{
			n = n / i;
			j = i;
		}
		if (n % i != 0)
			i++;
	}
	return (j);
}

/**
 * prime_check - checks if number is prime number
 * @num: Integer
 * Return: 1 if prime and 0 otherwise
 */
int prime_check(long int num)
{
	long int i;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
