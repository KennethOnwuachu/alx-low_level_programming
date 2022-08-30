#include "main.h"

/**
 * string_nconcat: concatenate two strings and returns pointer
 * @s1 : detination string
 * @s2 : source string
 * @n : number of bytes
 * Return : pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *ptr;
	unsigned int len1= strlen(s1);
	unsigned int len2= strlen(s2);

	ptr = malloc(sizeof(char) * (len1+len2));
	if (ptr == NULL)
		return(NULL);
	if (s1 == NULL)
		s1 = 0;
	if (s2 == NULL)
		s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	if (n >= len2)
		n = len2;
	for (j = 0;j <= n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return(ptr);
}
