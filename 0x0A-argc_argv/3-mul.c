#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiply 2 numbers
 * @argc: count
 * @argv: vector
 * Return: 0 successful
 * On error retuturn 1
 */
int main(int argc, char **argv)
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);

	return (0);
}
