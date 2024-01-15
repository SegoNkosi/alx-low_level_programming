#include "main.h"
/**
 * _atoi - this function converts a string
 * into an integer
 * @s: the string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, a = 0;
	unsigned int unsign = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sign *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		unsign = (unsign * 10) + (s[a] - '0');
		a++;
	}
	unsign *= sign;
	return (unsign);
}
