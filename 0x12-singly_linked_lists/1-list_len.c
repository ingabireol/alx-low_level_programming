#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of elements in s lidt
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

