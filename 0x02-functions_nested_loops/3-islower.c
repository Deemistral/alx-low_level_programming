#include "main.h"
/**
 * _islower - function to check for a lower case character
 * @c: int to be used as an argument in the function
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
