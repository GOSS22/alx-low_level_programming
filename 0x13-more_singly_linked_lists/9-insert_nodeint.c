#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index of the listint_t list where the new node should be added.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1, *ptr2 = *head;
	unsigned int count;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;

	if (idx == 0)
	{
		ptr1->next = ptr2;
		*head = ptr1;
		return (ptr1);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (ptr2 == NULL || ptr2->next == NULL)
			return (NULL);

		ptr2 = ptr2->next;
	}

	ptr1->next = ptr2->next;
	ptr2->next = ptr1;

	return (ptr1);
}
