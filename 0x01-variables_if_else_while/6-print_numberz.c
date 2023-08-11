#include <stdio.h>
/**
 * main - Entry  point
 *Description: print numbers
 *Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		/*convert a to ASCII representation*/
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
