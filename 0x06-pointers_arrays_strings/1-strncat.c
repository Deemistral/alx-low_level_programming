#include "main.h"

/**
 * _strncat - concatenates two strings and add number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index
 * Return: returns a new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
