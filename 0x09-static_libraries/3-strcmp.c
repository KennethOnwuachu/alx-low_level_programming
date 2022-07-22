#include "main.h"

/**
* _strcmp: this is a function that compares strings
* @s1- string 1
* @s2- sting 2
*
*Return : f
*/
int _strcmp(char *s1, char *s2)
{
	int a;
	int b, *c, *d;
	int F;

	for (a = 0; s2[a] != '\0';)
		a++;
	*c = s2[a];
	for (b = 0; s1[b] != '\0';)
		b++;
	*d = s1[b];
	F = *c - *d;
	 return(F);
}

