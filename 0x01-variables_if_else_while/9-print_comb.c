#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combination of single digit numbers
 *
 * Description: uses the print function
 * the program 'prints all possible combination of single digit numbers
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
