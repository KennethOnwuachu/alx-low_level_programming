#include "main.h"

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
	int i, j, count1, count2;
	count1 = 0;

	for (j = 0; src[j] != '\0'; j++)
		count1++;

	for (i = 0; i <= count1; i++)
		{
			if (i == n )
				break;
			dest[i] = src[i];
		}
	return (dest);
}

