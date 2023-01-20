#include "variadic_functions.h"
#include <stdio.h>

/*
 * print_numbers: a function that prints numbers followed by a new line.
 * @n: number of integers passed to the function
 * @separator: separator between two numbers
 * Descriptio: If separator is NULL, don't print it
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vlist;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
