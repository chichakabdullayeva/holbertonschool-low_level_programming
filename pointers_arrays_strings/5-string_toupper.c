#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Description: This function iterates through the given string and
 *              converts each lowercase letter to its uppercase
 *              equivalent. The transformation is done in place.
 *
 * Return: A pointer to the modified string (str).
 */
char *string_toupper(char *str)
{
int i;  /* Loop counter */
for (i = 0; str[i] != '\0'; i++)
{
/* Check if the current character is a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
{
/* Convert to uppercase by adjusting ASCII value */
str[i] = str[i] - ('a' - 'A');
}
}
return str;  /* Return the pointer to the modified string */
}
