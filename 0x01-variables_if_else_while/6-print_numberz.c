#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints all single digits numbers
 * Return: Always 0 (Success)
 *
 */


int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);

}
