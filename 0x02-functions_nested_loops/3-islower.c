#include "main.h"

/**
 * _islower - funtion to check for lowercase
 *
 * @c: is the int used for the arguament of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
