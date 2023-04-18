#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @m: the dog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *m, char *name, float age, char *owner)
{ 
	if(m != NULL)
	{ 
	 m->name = name;
	 m->age = age;
	 m->owner = owner;
	}
}

