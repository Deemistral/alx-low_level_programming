#include "main.h"
#include <stdio.h>
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
	int index =, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[dest_len++] = src[index];
		

	}


	return (dest);
}
