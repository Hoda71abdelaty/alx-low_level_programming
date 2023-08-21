#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwards
 * Return: Always 0 (success)
 */

int main(void)
{
	char passward[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));
	while (sum < 2772)
	{
		passward[index] = 33 + rand() % 94;
		sum += passward[index++];
	}

	passward[index] = '\0';
	if (sum != 2772)
	{
	diff_half1 = (sum - 2772) / 2;
	diff_half2 = (sum - 2772) / 2;

	if ((sum - 2772) % 2 != 0)
	diff_half1++;

	for (index = 0; passward[index]; index++)

	{
		if (passward[index] >= (33 + diff_half1))
		{
			passward[index] -= diff_half1;
			break;
		}
	}
	for (index = 0; passward[index]; index++)

	{
		if (passward[index] >= (33 + diff_half2))
		{
		passward[index] -= diff_half2;
			break;
		}
	}
	}
	printf("%s", passward);
	return (0);
}

