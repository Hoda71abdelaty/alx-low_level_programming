#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: compute sum of all multiples of 3 or 5 below 1024
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}