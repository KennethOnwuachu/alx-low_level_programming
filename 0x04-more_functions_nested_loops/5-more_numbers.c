#include "main.h"

/** main - code prints 10 times the number from 0 to 14
*
* Return : nothing returns
*/

void more_numbers(void)
{
	int c, ch;

	for (c = 0; c < 10; c++)
	{
		for (ch = 0; ch < 15; ch ++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
