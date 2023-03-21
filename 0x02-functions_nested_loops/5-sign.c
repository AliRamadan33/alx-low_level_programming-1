#include "main.h"
/**
 * print_sign -> this func prints the sign of a number.
 * @n: the num for the check
 * Return: 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar('-1');
	}
}
