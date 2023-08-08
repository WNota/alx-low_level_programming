#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _abs - Calculates absolute value of a number
 * @n: the input number
 * Return: the absolute value of the input number
 */

int _abs(int n)
{
	if (n < 0)
	{
	return (-n);
	}
	else
	{
		return (n);
	}
}
