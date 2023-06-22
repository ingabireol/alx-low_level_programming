#include <stdio.h>

/**
 * main - prints fizz for multiples of three and buzz
 * for multiples of five and fizzbuzz of Multiples
 * of both three and five
 * Return: Always 0;
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
			continue;
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
			printf("%d ", i);
	}
	return (0);
}
