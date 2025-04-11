#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
	;
	nl++;

	d->name = malloc(nl * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		d->name[i] = name[i];

	d->age = age;
	for (ol = 0; owner[ol]; ol++)
	;
	ol++;

	d->owner = malloc(ol * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		d->owner[i] = owner[i];
	return (d);
}
