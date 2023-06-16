#include <stdio.h>

/**
 * main - prints "and that piece of art is usefull" - dora.
 * Korpar, 2015-10-19.
 *
 * Return: 1
 */

int main(void)
{
	char name[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (name[i] != '\0')
	{
		putchar(name[i]);
		i++;
	}
	putchar('\n');
	return (1);

}
