#include "main.h"

/**
 * print numbers - print 0-9
 *
 * This function uses a for loop to iterate through the numbers from '0' to '9'
 * and prints each number to the standard output using the _putchar function.
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
