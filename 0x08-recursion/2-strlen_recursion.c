#include "main.h"

/**
* _strlen_recursion: this is a function that returns the length of a string
* @s : a pointer to a character
*
* Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	int n;

	if (s[0] == '\0')
		return (0);
	else
	{
		n = (1 +  _strlen_recursion(s + 1));
		return (n);
	}
}
