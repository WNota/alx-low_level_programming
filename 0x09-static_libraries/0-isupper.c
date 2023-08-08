#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - checks if is uppercase character.
 * @c: character to be checked.
 * Return: 1 if upper, otherwise 0.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
