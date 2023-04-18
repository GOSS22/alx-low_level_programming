#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic info of a struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *s1, char *s2);

void free_dog(dog_t *d);


#endif /* DOG_H */
