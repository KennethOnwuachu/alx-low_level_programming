#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: Prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
