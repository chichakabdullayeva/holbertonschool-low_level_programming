#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character
 *         in the string, or NULL if the character is not found.
 */
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c)
{
int i = 0;
/* Iterate through the string */
while (s[i] != '\0')
/* Check for end of string */
{
if (s[i] == c)
/* Check if the current character matches c */
{
return (s + i);
/* Return pointer to the found character */
}
i++;
}
return (NULL);
/* Character not found, return NULL */
}
