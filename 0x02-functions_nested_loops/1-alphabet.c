#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
