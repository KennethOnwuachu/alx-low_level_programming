#include <stdio.h>
#include "main.h"

/**
* print_numbers : code to print numbers 0 to 9
*
* Returns nothing
*/

void print_numbers(void)
{
	int n;
	
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
