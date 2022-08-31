#include "main.h"
/**
* array_range : function creates an array of integers
* @min : minimium value
* @max : maximum value 
*
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = max - min + 1;

	if (min > max)
		return NULL;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return NULL;
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return(ptr);
}

