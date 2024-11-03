#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: The string to print.
 *
 * Description: This function takes a string as input and prints it
 *              in reverse order followed by a new line.
 */
void print_rev(char *s)
{
int i = 0;
/* Find the length of the string */
while (*(s + i) != '\0')
{
i++;
}
i--; 
/* Adjust for zero-based index */
/* Print the string in reverse */
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}

