#include "dog.h"
#include <stdlib.h>

/**
* free_dog - function that frees dog
* @d: struct type that is being freed
*
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

