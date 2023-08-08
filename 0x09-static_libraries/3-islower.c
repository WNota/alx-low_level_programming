#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - checks if a lowercase letter character.
 * @c: character to be checked.
 * Return: 1 if character is lowercase, 0 otherwise.
 */


int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
