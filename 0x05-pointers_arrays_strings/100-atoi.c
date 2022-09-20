#include "main.h"

/**
 * _atoi - convert string into an integer
 * @s: specified string
 *
 * Return: the converted int
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*is >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num *sign);
}
