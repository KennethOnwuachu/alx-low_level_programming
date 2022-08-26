#include "main.h"
#include <string.h>

/**
* _strncpy: a function that copies a string
* @dest: destination string
* @src: source string
* @n : number of things
*
* Return: Dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, count1, count2;
	count1 = strlen(src);
	count2 = strlen(dest);

	for (i = 0; i <= count1; i++)
		{
			if (i == n )
				break;
			dest[i] = src[i];
		}
	return (dest);
}

