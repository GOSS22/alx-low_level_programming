#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - checks the length of a string
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t
 * list
 * @head: Head
 * @str: string
 * Return: the address of the new element, or NULL if it
 * failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
