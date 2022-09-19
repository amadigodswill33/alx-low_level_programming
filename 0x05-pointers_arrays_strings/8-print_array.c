#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 * Returns: nothing
 */

void print_array(int *a, int n)
{
	int incl;

	for (incl = 0; incl < n; incl++)
	{
		if (incl != n - 1)
			printf("%d, ", a[incl]);
		else
			printf("%d", a[incl]);
	}
	putchar(10);
}

