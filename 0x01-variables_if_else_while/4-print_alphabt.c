#include <stdio.h>

/**
 * main - print alpahbets with exceptions
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a < 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
