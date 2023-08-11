#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		if (let == 'e' || let == 'q')
			let++;
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
