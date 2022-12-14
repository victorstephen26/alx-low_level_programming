#include "main.h"

/**
 * time table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, c;

	if (n < 0 || n >= 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = (a * b);
			if (b == 0)
				_putchar('0' + c);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c);
				}
				else if (c > 9 && c < 100)
				{
					_putchar('0' + (c / 100));
					_putchar('0' + ((c / 10) % 10));
					_putchar('0' + (c % 10));
				}
			}
		}
		_putchar('\n');
	}
}
