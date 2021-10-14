#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: The first node
 */

void free_list(list_t *head)
{
	if (head)
	{
		if (head->next)
			free_list(head->next);
		if (head->str)
			free(head->str);
		if (head)
			free(head);
	}
}
