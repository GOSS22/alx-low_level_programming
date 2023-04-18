#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct do
 * @d: Pointer to struct dog
 * @name: Name of struct dog
 * @age: Age of struct dog
 * @owner: Owner of struct dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;

		d->age = age;

		d->owner = owner;
	}
}
