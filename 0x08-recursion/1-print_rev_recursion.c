#include "main.h"

/**
* Main - _print_rev_recursion
* Description - This function prints the reverse by using recursion 
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
