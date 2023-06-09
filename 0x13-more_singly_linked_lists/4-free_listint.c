#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
