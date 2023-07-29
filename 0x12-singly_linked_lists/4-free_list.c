#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: the list to be freed
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (head)
	{
		current_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(current_node->str);
			free(current_node);
			current_node = next_node;
			next_node = next_node->next;
		}
		free(current_node->str);
		free(current_node);
	}
}
