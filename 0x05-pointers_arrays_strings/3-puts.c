#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 *@str: string value to be printed
 *
 * Description: also prints a string
 * On success: returns no error at all
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

