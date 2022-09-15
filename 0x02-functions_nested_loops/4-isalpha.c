#include "main.h"
/**
 * _isalpha - a function to check if c is a lower or upper case character
 * @c: int to be used in the argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
	return (1);
	}
	else
	return (0);
}
