#include "main.h"
/**
 * swap_int - swaps values
 * @a: variable 1
 * @b: valiable 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
