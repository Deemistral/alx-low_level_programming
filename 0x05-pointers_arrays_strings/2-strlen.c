#include "main.h"

/**
 * _strlen - should retun the length of a string
 * @s: string
 * Return: returns length as an integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
