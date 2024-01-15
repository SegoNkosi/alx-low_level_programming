#include "main.h"
/**
 * _memset - this fills a block of memory with a specific value
 * @s: starting address of memory
 * @b: the valu thats's desired
 * @n: number of bytes that will be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int r = 0;


	for (; n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
