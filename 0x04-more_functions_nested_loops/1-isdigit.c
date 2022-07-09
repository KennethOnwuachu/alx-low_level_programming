#include <stdio.h>

/**
*_isdigit - checks code for a digit 0 - 9
*@c : input number
*Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c);

int main(void)
{
	int c;

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* kenneth, take note that i tweaked this and this is not exactly the right one o*/
