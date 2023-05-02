#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the
 * end of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;
	ptr1->next = NULL;

	if (*head == NULL)
		*head = ptr1;

	else
	{
		ptr2 = *head;
		while (ptr2->next != NULL)
			ptr2 = ptr2->next;
		ptr2->next = ptr1;
	}

	return (*head);
}
