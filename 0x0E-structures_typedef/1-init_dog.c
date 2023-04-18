#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @m: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *m, char *name, float age, char *owner)
{
	if (m != NULL)
	{
		m->name = name;
		m->age = age;
		m->owner = owner;
	}
}
