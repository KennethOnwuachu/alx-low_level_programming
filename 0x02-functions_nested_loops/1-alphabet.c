#include "main.h"

/*
 * main -Entry point
 *
 * print_alphabet : This function prints alphabetsin lower cases
 *
 * Return : Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{_putchar(c);
	}
	_putchar('\n');
}
