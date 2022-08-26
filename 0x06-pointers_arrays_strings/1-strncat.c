#include "main.h"
#include <string.h>

/**
* _stncat - to concactenate two strings 
* @dest - 1st string
* @src - 2nd string
* @n - value of int 
*
* Return : Dest 
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = strlen(src);
	int len2 = strlen(dest);

	for (i = 0; i <= len1; i++)
	{
		if (i < n && i <= len1)
			dest[len2+i] = src[i];
	}
	return(dest);
}
