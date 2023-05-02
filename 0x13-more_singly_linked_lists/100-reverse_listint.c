#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (head == NULL || *head == NULL)
		return (NULL);

	ptr2 = NULL;

	while ((*head)->next != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr2;
		ptr2 = *head;
		*head = ptr1;
	}

	(*head)->next = ptr2;

	return (*head);
}
