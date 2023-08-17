#include "main.h"

/**
 * _isdigit - check if input is digit between 0 to 9
 * @c: input
 * Return: 1 if it is digit, 0 if else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
