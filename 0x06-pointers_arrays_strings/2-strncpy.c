#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to be copied
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return dest;
}

