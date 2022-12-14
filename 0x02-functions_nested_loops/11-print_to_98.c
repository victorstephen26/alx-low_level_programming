#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints natural numbers followed by a new line
 * @n: number provided by user
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", n);
	}
}
