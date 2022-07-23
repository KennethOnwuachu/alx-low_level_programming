#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that multiplies two numbers
* @argc - counts the number of argument 
* @argv - receives two integers\
*
* Returns 1 and prints error if any error
*/
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int k;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = i * j;
		printf("%d\n", k);
	}
	return (0);
}


