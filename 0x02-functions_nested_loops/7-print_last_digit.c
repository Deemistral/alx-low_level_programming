#include "main.h"

/**
 * print_last_digit - prints last digit of a given number
 * @n: The number in the question
 *
 * Return: refers to the value of the laast digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 10)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
