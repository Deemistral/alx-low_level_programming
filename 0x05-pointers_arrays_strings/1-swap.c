#include "main.h"

/**
 * swap_int - swaps two int values
 * @a: first integer
 * @b: second integer
 * Return: does not return anything
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

