#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - A code that print a string followed by new line
 * @s: the string to print
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{

		_putchar('\n');
		return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);
}
