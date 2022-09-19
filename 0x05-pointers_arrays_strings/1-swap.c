#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: first integer value
 * @b: second integer value
 * Returns: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
