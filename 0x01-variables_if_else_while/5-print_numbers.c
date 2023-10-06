#include <stdio.h>
/**
 * main - function prints single digits
 * Return: always 0
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
	if (j != 'e' && j != 'q')
	putchar(j);
	}

	putchar('\n');
	return (0);
}
