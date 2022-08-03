#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* Main - function that creates an array of chars and initializes it
* *create_array function
* @size : unsigned int
* @c : char
* Return: null if size is 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *cr;

	if (size == 0)
		return (NULL);

	cr = malloc(size * sizeof(c));

	if (cr == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		cr[s] = c;

	return (cr);
}
