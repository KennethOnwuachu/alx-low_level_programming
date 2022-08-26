#include "main.h"
/**
* _strcmp: this is a function that compares strings
* @s1- string 1
* @s2- sting 2
*
*Return : nothing
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
		if (s1[i] == s2[j])
			return (0);
		else
			return (s1[i] - s2[j]);
}


