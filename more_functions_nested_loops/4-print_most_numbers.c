#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 ,expect 2 and 4
 * _putchar:print the numbers expext 2and 4
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
_putchar (c);
}
_putchar ('\n');
}
