#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements
 * in a linked list_t list
 * @h: Head
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;

		h = h->next;
	}
	return (i);
}
