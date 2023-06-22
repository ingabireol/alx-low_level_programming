#include <stdio.h>

/**
 * main - prints the sum od fibonacci numbers less than 4000000
 *
 * Return: Always 0
 */

int main(void)
{
	long int temp, i, j, k = 0, sum = 0;

	for (i = 1, j = 0; k < 50; k++)
	{
		temp = i + j;
		j = i;
		i = temp;
		if ((temp % 2) == 0 && (temp < 4000000))
		{
			sum += temp;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
