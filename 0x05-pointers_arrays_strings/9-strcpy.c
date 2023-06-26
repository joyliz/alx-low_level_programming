#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[length] = '\0';

	return (dest);
}
