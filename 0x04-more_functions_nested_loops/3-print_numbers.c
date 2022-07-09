#include <stdio.h>
#include "main.h"
/**
* print_numbers - code prints numbers from 0 to 9 and new line

* Return : no return
*/

void print_numbers(void);

int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

