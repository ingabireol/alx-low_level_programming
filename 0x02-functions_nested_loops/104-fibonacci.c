#include <stdio.h>

/**
 * main - prints first fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	double  temp, i, j, c = 96;

	printf("1, 2, ");
	for (i = 2, j = 1; c > 0; c--)
	{
		if (c == 1)
		{
			temp = i + j;
			printf("%.0f", temp);
			continue;
		}
		temp = i + j;
		printf("%.0f, ", temp);
		j = i;
		i = temp;
	}
	printf("\n");
	return (0);
}
