#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: print the sum of fibonacci sequence not exceed 4million
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = n1 + n2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		n1 = n2;
		n2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
