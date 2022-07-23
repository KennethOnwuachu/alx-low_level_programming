#include <stdio.h>

/**
* main- program that prints the number of arguments
* @argc: counts the number
* @argv: the arguments that are passed
*
* Return: Always (0) success
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	int c;
	c = argc;

	printf("%d\n", c - 1);
	return (0);
}
