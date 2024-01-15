#include "main.h"

/**
 * main - this prints a string
 * @str: string to be printed
 * Return: new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
