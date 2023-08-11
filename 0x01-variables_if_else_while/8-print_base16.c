#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 48; /*48; decimal rep of 0*/

	while (num <= 102) /*102; decimal rep of f*/
	{
		putchar(num);

		/* after 9 go to 96; */
		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');

	return (0);
}
