#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (success)
 */

int main(void)
{
char a;
int b;
short e;
long int c;
long long  int d;
float f;

printf("Size of a char: %lu 1 byte(s)\n", sizeof(a));
printf("Size of a short: %lu 1 byte(s)\n", sizeof(e));
printf("Size of an int: %lu 4 byte(s)\n", sizeof(b));
printf("Size of a long int: %lu 4 byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu 8 byte(s)\n", sizeof(d));
printf("Size of a float: %lu 4 byte(s)\n", sizeof(f));
return (0);
}
