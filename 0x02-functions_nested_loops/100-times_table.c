#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int h, i, k;

	if (n >= 0 && n <= 15)
	{
		for (h = 0; h <= n; i++)
		{
			for (i = 0; i <= n; i++)
			{
				k = i * h;
				if (i == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
