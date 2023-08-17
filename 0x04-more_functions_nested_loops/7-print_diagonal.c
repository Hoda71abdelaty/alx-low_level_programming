#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the \ character should be printed
 */

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int line, space;

		for (line = 0; line < n; line++)
		{
			for (space = 0; space < n; space++)
			{

				if (line == space)
					_putchar('\\');
				else if (space < line)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
