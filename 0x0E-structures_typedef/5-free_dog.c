#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: the dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	/*free(d->age);*/
	free(d->owner);
}
