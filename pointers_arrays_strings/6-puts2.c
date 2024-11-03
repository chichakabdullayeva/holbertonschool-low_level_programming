#include "main.h"

/**
 * _putchar - Writes a character to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1, -1 on error
 */
int _putchar(char c);

/**
 * puts2 - Prints every other character of a string
 *
 * @str: Pointer to the string
 *
 * Return: Always 0
 */
void puts2(char *str)
{
int a = 0;
int l;
/* Count the length of the string */
while (*(str + a) != '\0')
{
a++;
}
l = a;
/* Print every other character */
for (a = 0; a < l; a += 2)
{
_putchar(*(str + a));
}
_putchar('\n');
}

