#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - lists the number of elements
 * @h: node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	list_t *ptr = h ? h->next : NULL;

	if (h)
		num++;
	if (ptr)
	{
		while (ptr != NULL)
		{
			ptr = ptr->next;
			num++;
		}
	}

	return (num);
}
