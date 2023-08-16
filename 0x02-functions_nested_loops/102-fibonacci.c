#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 fibonacci numbers starting with 1 and 2
 * Return: Always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = n1 + n2;
		printf("%ld", sum);

		n1 = n2;
		n2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
