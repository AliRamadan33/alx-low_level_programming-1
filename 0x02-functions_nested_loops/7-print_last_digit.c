#include "main.h"
/**
 *print_last_digit ->this print thte last  digit of num
 *@n: this num that compute the last digit
 *Return :the lasts digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
