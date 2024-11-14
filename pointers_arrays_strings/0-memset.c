#include "main.h"
#include <string.h>
/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the starting address of the memory block to be filled.
 * @b: The value to fill the memory with (in byte form).
 * @n: The number of bytes to be filled starting from the address.
 *
 * Return: A pointer to the filled memory block (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
