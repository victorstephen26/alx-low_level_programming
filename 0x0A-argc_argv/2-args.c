#include "main.h"
#include <stdio.h>
/**
 * main - print all argument received
 * @argc: array size
 * @argv: array containing elements
 * Return: 0 successful
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}

	return (0);
}
