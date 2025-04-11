#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(1);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
