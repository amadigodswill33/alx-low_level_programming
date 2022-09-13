#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet, new_line
 *
 * Description: using the print function
 * the program "prints the lowercase alphabets in a new line
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
