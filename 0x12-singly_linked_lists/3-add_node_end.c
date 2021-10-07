#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of linked list
 * @head: beginning node
 * @str: string in new node
 * Return: pointer to new node, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *s;
	list_t *new_node;
	list_t *last;

	for (len = 0; str && str[len] != '\0'; len++)
		;
	last = head ? *head : NULL;
	while (last && last->next != NULL)
		last = last->next;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		s = malloc(sizeof(char) * (len + 1));
		if (!s)
			free(new_node);
		for (len = 0; str[len] != '\0'; len++)
			s[len] = str[len];
		s[len] = '\0';
		new_node->str = s;
		new_node->len = len;
		new_node->next = NULL;
		if (last)
			last->next = new_node;
		if (*head == NULL)
			*head = new_node;
	}
	return (new_node);
}
