#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n of an array of integer
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i += 1)
	{
	printf("%d", a[i]);
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
