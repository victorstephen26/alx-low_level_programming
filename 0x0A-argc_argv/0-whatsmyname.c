#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: arrat size
 * @argv: array containing elements
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);

	return (0);
}
