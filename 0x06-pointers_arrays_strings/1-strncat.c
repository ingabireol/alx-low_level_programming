#include "main.h"
/**
 * _strncat - conca tenates two strings
 * @dest: destionation
 * @src: source
 * @n: size of characters to get over to
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
