#include "main.h"

/**
 * _islower - checks if lowercase
 * @c: ascii code for the character
 *
 * Return: 0 if otherwise and 1 if lower case
 */

int _islower(int c)
{
	if (c < 'a'  || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
