#include "main.h"

/**
  * print_numbers - code prints numbers from 0 to 9 and new line
  * Return : no return
  */
void print_numbers(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

