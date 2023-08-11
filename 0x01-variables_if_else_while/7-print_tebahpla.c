#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabetics
 * Return: Always 0 (success)
 */
int main(void)
{
	char let = 'z';

	while (let >= 'a')
	{
		putchar(let);
		let--;
	}
	putchar('\n');

	return (0);
}
