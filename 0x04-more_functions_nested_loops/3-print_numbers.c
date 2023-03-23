#include "main.h"
/**
 * print_numbers - print nums from 0 : 9
 * Return: always (0)
 */
void print_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}

	_putchar('\n');
}
