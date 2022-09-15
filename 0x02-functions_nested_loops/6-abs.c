#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes absolute value of an integer
 * @c: an int that will be passed in as an argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
