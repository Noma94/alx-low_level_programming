#include "main.h"

/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: string to put
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar(*str++);
}
