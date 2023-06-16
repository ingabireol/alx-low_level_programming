#include <stdio.h>

/**
 * main - prints a single digit numbers of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
