#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char let = 'a';
	char lEt = 'A';

	/*print a - z*/
	while (let <= 'z')
	{
		putchar(let);
		let++;
	}
	/*print A - Z*/
	while (lEt <= 'Z')
	{
		putchar(lEt);
		lEt++;
	}
	putchar('\n');
	return (0);
}
