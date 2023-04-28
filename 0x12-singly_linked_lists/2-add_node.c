#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - checks the len of a string
 * @s: string
 * Return: Length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node - adds a new node
 * at the beginning of a list_t list
 * @head: Head
 * @str: string
 * Return: the address of the new element, or NULL if it
 * failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
