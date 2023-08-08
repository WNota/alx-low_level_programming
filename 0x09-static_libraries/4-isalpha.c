#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: Character to be checked.
 * Return: 1 if the character is an alphabetic character, otherwise 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
