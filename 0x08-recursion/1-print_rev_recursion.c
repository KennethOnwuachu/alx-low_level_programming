#include "main.h"

/**
* _print_rec_recursion - a function that uses recursions to print a string
* in reverse.
* @s : takes in a pointer to a character
*
* Return: always (0)
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
