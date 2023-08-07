#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
int total = 0;
for (int i = 1; i < argc; i++)
{
	char *num = argv[i];
	int j = 0;

	while (num[j] != '\0')
	
	{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
			}
	total += atoi(num);
}
printf("%d\n", total);
return (0);
}
