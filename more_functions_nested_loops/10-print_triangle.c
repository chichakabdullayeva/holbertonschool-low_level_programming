#include "main.h"
/**
 * print_triangle - prints a triangle with #
 * _putchar : print new line,#
 * @size: size of triangel
 */
void print_triangle(int size)
{
int c, i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (c = 0; c < size; c++)
{
for (i = 0; i < size - c - 1; i++)
{
_putchar(' ');
}
for (j = 0; j <= c; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
