#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase, and uppercase
 *
 * Description: use the print function
 * the program "print the alphabet in lowercase, and uppercase, n_line
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
