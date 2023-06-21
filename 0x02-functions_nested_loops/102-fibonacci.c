#include <stdio.h>

/**
 * main - prints first fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long int  temp, i, j, c = 48;

	printf("1, 2, ");
	for (i = 2, j = 1; c > 0; c--)
	{
		if (c == 1)
		{
			temp = i + j;
			printf("%ld", temp);
			continue;
		}
		temp = i + j;
		printf("%ld, ", temp);
		j = i;
		i = temp;
	}
	printf("\n");
	return (0);
}
