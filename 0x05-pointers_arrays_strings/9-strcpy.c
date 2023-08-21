#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: Value of the destination
 * @src: Value of the source
 * Return:  the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i += 1)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
