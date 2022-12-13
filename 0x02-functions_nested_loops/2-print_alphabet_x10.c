#include "main.h"

/**
 * print_alphabet_x10 - print alphabets
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}
}
