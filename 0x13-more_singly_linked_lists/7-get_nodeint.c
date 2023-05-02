#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Locates a given node of
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate.
 * Return: If the node does not exist - NULL.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
