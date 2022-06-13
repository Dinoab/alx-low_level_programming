#include "main.h"
/**
 * print_rev - print in reverse a string
 * @str:takes a string of characters
 */
void print_rev(char *str)
{
	int i = 0, c;

	while (str[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
