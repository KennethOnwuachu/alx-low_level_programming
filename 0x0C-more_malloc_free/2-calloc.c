#include "main.h"

/**
* _calloc : function allocates memory for an array using calloc
* @nmeb: number of elements
* @size : size of bytes
*
* Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return NULL;

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return(ptr);
}
