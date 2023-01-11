#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiply 2 numbers
 * @argc: count
 * @argv: vector
 * Return: 0 successful
 */
int main(int argc, char **argv)
{
	int arr_len = argc - 1;

	if (arr_len != 2)
	{
		puts("Error");

		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	return (0);
}
