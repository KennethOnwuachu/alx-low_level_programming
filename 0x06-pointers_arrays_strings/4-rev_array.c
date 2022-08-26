#include "main.h"

/**
* rev_array : this function reverses a string
* @a - array
* @n - number of array
* Return : nothing
*/

void reverse_array(int *a, int n)
{
	int i,j,count,tmp;
	count = 0;

	for (i = 0; a[i] != '\0'; i++)
		count++;

	for (i = 0; i <= count/2; i++)
	{
		tmp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
	}
}
