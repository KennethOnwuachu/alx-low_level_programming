#include "main.h"

/** main - code prints a straight line
*
* Return 0 (Success)
*@n: times straight line is printed
*/
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
