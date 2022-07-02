#include <stdio.h>

/**
 * main - Entry point
 *
 * Description -  prints all single digit numbers 0 to 10 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');

	return (0);
}
