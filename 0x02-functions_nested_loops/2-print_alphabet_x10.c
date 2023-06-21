#include "main.h"
/**
 * print_alphabetx_10 - Prints the alphabet 10 times
 *
 * Return: void
 */
void print_aplphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
