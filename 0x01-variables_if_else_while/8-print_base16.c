#include <stdio.h>

/**
 * main - prints alphabet in lower case
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
