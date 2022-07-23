#include <stdio.h>

/**
* main - this program prints all arguments that it receives
* @argc: counts the number of argument
* @argv: the argument 
*
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s", argv[a]);
		printf("\n");
	}
	return (0);
}
