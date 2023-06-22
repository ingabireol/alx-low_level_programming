#include "main.h"

/**
 * _isdigit - checks if c is an integer
 * @c: interger to be checked
 * Return: 1 if c is digit 
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
