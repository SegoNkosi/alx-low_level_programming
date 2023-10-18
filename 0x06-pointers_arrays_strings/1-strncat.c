#include "main.h"

/**
  * _strncat  - function that concatenates two strings
  *
  * @n: Function parameter one
  *
  * @src: Function parameter two
  *
  * @dest: Function parammeter three
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
	{
	k++;
	}
	while (l < n && src[l] != '\0')
	{
	dest[k] = src[l];
	k++;
	l++;
	}
	dest[k] = '\0';
	return (dest);
}
