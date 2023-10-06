#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	char j;

	for (j = 'z'; j >= 'a'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
