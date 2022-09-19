#include "main.h"

/**
 * _strlen - a function that returns lenght of a string
 * @s: a string
 * Return: return lenght as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
