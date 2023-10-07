#include "main.h"

/*
 * Function to print 10 times the numbers from 0 to 14
 *
 * Prints 10 lines of numbers, 0 to 14, followed by a newline
 *
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 14; i++)
	{
		num = i * 10;
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');

		_putchar('\n');
	}
}
