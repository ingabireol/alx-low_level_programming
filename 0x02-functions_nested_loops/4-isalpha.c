#include "main.h"

/**
 * _isalpha - checks if it is an alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowerwcase or uppercase
 * other wise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
