#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: integer that signfies number of byte to copy
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}	
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
