#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - Adds node to the beginning of a linked list
 * @head: first node
 * @str: new node
 * Return: New string address
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *s;
	list_t *new_node;

	for (len = 0; str && str[len] != '\0'; len++)
		;
	if (head)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node)
		{
			s = malloc(sizeof(char) * (len + 1));
			if (!s)
			{
				free(new_node);
				return (NULL);
			}

			for (len = 0; str[len] != '\0'; len++)
				s[len] = str[len];
			s[len] = '\0';
			new_node->str = s;
			new_node->len = len;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
