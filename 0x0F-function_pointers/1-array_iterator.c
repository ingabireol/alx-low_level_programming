#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a given function on each item
 * of the array
 * @array: array
 * @size: size of the array
 * @action: function
 * Retun: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
