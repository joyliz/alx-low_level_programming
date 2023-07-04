#include "main.h"

/**
 * _memset - like, totally fills a block of memory with a specific value, dude
 * @s: the righteous starting address of memory to be filled
 * @b: the desired value, man
 * @n: number of bytes to be changed, ya know?
 *
 * Return: a changed array with a new value for n bytes, like, mind-blowing
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

