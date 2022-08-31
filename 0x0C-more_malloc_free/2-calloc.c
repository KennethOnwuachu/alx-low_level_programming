#include "main.h"

/**
* _calloc : function allocates memory for an array using calloc
* @nmeb: number of elements
* @size : size of bytes
*
* Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(size) * nmeb);
	if (ptr == NULL)
		return NULL;
	if (nmeb == 0)
		return NULL;
	if (size == 0)
		return NULL;

	for (i = 0; i <= nmeb; i++)
		ptr[i] = 0;
	ptr[i] = '\0';
	return(ptr);
}
