#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a given string
 * @str: string to be printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);

}
