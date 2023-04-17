#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct of a dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Description: a user-defined type that shows the name, age and owner
 * of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
