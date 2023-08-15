#include "main.h"
#include <stdio.h>

/**
 *print alphabets - utilizes on the _putchar function to print the alphabet
*/

void print_alphabet(void)
{
	 int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
