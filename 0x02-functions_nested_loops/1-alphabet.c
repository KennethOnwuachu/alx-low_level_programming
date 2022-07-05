#include <stdio.h>

/*
 * main -Entry point
 *
 * Description : This function prints alphabetsin lower cases
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(" %d + '0'");

	return (0);
}
