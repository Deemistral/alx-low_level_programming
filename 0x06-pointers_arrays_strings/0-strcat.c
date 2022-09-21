#include "main.h"

/*
 * _strcat - concatenates string pointed by @src
 *to the end of the string that is pointed to by @dest
 * @dest: string to be appended
 * @src: string to be concatenated
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[len] = src[i];
		len += 1;

	}

	dest[len] = '\0';
	return (dest);
}
