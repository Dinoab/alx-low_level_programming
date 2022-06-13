#include "main.h"
/**
 * print_rev - print in reverse a string
 * @s:takes a string of characters
 * Return:void means our answer is correct
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
