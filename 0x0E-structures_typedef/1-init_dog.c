#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing the struct
 * @d: pointer of struct
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: a function that initialize a variable of
 * type struct dog.
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
