#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: An integer less than, equal to, or greater than zero if
 *         s1 is found, respectively, to be less than, to match, or
 *         be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)  /* Compare characters of both strings */
{
if (*s1 != *s2)  /* If characters differ, return the difference */
{
return (*s1 - *s2);
}
s1++;  /* Move to the next character in s1 */
s2++;  /* Move to the next character in s2 */
}
/* If we reach here, at least one string has ended */
return (*s1 - *s2);  /* Return the difference of the terminating characters */
}
