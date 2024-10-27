#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char cicek = 'a';
	int a = 0;

	while (a < 10)
	{
		while (cicek <= 'z')
		{
			_putchar(cicek);
			cicek++;
		}
		_putchar('\n');
		a++;
		cicek = cicek - 26;
	}
}
