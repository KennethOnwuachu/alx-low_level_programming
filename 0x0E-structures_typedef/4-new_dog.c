#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: null if the function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, b, c;
	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return NULL;
	}

	for (b = 0; name[b]; b++)
		;

	for (c = 0; owner[c]; c++)
		;

	p_dog->name = malloc(b + 1);
	p_dog->owner = malloc(c + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return NULL;
	}
	
	for (a = 0; a < b; a++)
		p_dog->name[a] = name[a];
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < c; a++)
		p_dog->owner[a] = owner[a];
	p_dog->owner[a] = '\0';

	return(p_dog);
}

