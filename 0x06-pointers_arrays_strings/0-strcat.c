#include "main.h"

/**
 * _strcat - to concactenate two strings
 * @char *dest: destination string
 * @char *src: source string
 * Return : Destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (i = 0; dest[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
	
	}
	
	return(dest);
}

