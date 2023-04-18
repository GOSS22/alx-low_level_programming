#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns length of string
 * @str: String to be checked
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0, len = 0;

	while (str[i++] != '\0')
		len++;
	return (len);
}
/**
 * _strcpy - copies the content of s2 into s1
 * @s1: String 1
 * @s2: String 2
 * Return: Final string
 */
char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s2[i] != '\0'; i++)
		s1[i] = s2[i];

	s1[i] = '\0';
	return (s1);
}
/**
 * new_dog - creates a new dog
 * @name: Name of new dog
 * @age: Age of new do
 * @owner: Owner of new dog
 * Return: Pointer to new dog (Success),
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}

	p->name = _strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);

	return (p);
}
