#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int j;
	listint_t *copy;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			copy = (*h)->next;
			free(*h);
			*h = copy;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
