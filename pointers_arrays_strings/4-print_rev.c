#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: The string to print.
 */
int _putchar(char s);
void print_rev(char *s)
{
    int i = 0;

    /* Find the length of the string */
    while (*(s + i) != '\0')
    {
        i++;
    }
    i--; // Adjust for zero-based index

    /* Print the string in reverse */
    while (i >= 0)
    {
        _putchar(*(s + i)); // Ensure _putchar is declared
        i--;
    }
    _putchar('\n');
}

