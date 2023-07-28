#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * leng - fins the lenth of string
 * @str: string to find its length;
 * Return: the length
 */

int leng(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * add_node -  add new node at the beginning
 * @head: head
 * @str: the string to put into the list
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = leng(str);
	list_t *tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	if (!tmp->str)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = length;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
