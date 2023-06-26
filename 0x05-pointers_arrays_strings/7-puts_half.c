#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The input string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
		length++;

	start = length / 2;

	if (length % 2 == 1)
		start++;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
