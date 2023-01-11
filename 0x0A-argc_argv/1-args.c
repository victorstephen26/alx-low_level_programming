#include "main.h"
#include <stdio.h>

/**
 * main - program that prints a number of arguments passed into it
 * @argc: argumet count
 * @argv: argument vector
 * Return: 0 successful
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
