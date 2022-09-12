#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowevercase, a new_line
 *
 * Description: using the main function
 * the program "prints the alphabet in lowercase, a new_line
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
