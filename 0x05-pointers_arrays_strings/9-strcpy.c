#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies and paste a string
 * @dest: destination
 * @ char: character
 * @src: a source
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int incl = 0;

	while (*(src + incl) != '\0')
	{
		*(dest + incl) = *(src + incl);
		incl++;
	}
	*(dest + incl) = '\0';

	return (dest);
}
