#include "main.h"
#include <stdio.h>

/**
* Main - to write a program that prints its name
* @argc: takes in a as count
* @argv: array of pointer to strings
*
* Return: return (0) always
*/
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c != argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
