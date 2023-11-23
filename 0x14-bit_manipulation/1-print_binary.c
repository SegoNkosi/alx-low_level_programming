#include "main.h"

/**
 * _pow - this function calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int c;

	numb = 1;
	for (c = 1; c <= power; c++)
		numb *= base;
	return (numb);
}
/**
 * print_binary - this function prints a binary
 * representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divis, check;
	char flat;

	flat = 0;
	divis = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divis != 0)
	{
		check = n & divis;
		if (check == divis)
		{
			flat = 1;
			_putchar('1');
		}
		else if (flat == 1 || divis == 1)
		{
			_putchar('0');
		}
		divis >>= 1;
	}
}
