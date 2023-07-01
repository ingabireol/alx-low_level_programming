#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: -1 if s2 is greater than s1
 * 0 if they are equal
 * And 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}


