#include "main.h"

/**
 * print_alphabet_x10 - function that print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char line, letter;

	for (line = 0; line <= 9; line++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
