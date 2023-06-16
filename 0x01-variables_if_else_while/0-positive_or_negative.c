#include <stdlib.h>
#include <time.h>

/**
 * main - Prints if random number is either positive , negative
 * or zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		pritnf("%d is positive\n");
	}
	else if (n < 0)
	{
		printf("%d is negative\n");
	}
	else
	{
		printf("%d is zero\n");
	}
	return (0);
}
