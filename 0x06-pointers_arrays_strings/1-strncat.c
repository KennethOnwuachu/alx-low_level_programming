#include "main.h"

/**
 * _stncat - to concactenate two strings 
 * @dest - 1st string
 * @src - 2nd string
 * @n - value of int 
 * Return : Dest 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		if (j == n)
			break;
		dest[i] = src[j];
	}
	return (dest);
}
