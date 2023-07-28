#include "lists.h"
#include <stdlib.h>

/**
 * leng - finds the length of a string
 * @str: string
 * Return: the length of a sting
 */

int leng(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds node to an end
 * @str: string to eb added
 * @head: the list
 * Return: list_t of the currnt
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux = *head;
	list_t *tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->len = leng(str);
	tmp->next = NULL;
	tmp->str = strdup(str);
	if (!tmp->str)
	{
		free(tmp);
		return (NULL);
	}
	if (aux)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = tmp;
	}
	else
		*head = tmp;
	return (tmp);

}
