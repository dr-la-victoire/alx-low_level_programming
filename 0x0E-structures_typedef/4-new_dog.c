#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: NULL (Failure) or the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pNew_dog;

	pNew_dog = malloc(sizeof(dog_t));

	if (pNew_dog == NULL)
		return (NULL);
	pNew_dog->name = name;
	pNew_dog->age = age;
	pNew_dog->owner = owner;

	return (pNew_dog);
}


