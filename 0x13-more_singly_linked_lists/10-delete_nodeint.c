#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given index of a
 * listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted.
 * Return: On success - 1, and On failure, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1, *ptr2 = *head;
	unsigned int count;

	if (ptr2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (ptr2->next == NULL)
			return (-1);

		ptr2 = ptr2->next;
	}

	ptr1 = ptr2->next;
	ptr2->next = ptr1->next;
	free(ptr1);
	return (1);
}
