#include "main.h"

/**
 * rev_string - print the string in reverse
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = _strlen(s) - 1;
	char temp;

	while (i <= j / 2)
	{
		if (i == j)
			break;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
}

/**
 * _strlen - calculates the length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

