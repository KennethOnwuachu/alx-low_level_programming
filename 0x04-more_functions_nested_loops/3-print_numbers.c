#include "main.h"

/**
  * print_numbers - code prints numbers from 0 to 9 and new line
  * Return : no return
  */
void print_numbers(void)
{
	int ch;

	for (ch = '0'; ch < '10'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

