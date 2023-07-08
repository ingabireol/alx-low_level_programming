#include "main.h"
/**
 * _strlen - caluculates the length of a string
 * @str: string
 * Return: string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * palindrome - iterates from the first to last character
 * @a: integer starting from zero
 * @b: integer starting from the last
 * @str: string
 * Return: 0 if not palindrome and 1 otherwise
 */

int palindrome(char *str, int a, int b)
{
	if (((a == b) || (a == b - 1)) && (str[a] == str[b]))
		return (1);
	else if (str[a] != str[b])
		return (0);
	return (palindrome(str, a + 1, b - 1));
}
/**
 * is_palindrome - checks is string is palindrome
 * @s: string
 * Return: 1 if true and 0 otherwise
 */

int is_palindrome(char *s)
{
	int b = _strlen(s) - 1;
	int a = 0;

	if (s[0] == '\0')
		return (1);
	return (palindrome(s, a, b));
}
