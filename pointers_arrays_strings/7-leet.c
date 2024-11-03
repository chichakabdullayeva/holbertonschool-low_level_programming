#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: Pointer to the string to be encoded.
 *
 * Description: This function replaces certain letters in the input string
 *              with their corresponding leet speak characters:
 *              - 'a' or 'A' is replaced by '4'
 *              - 'e' or 'E' is replaced by '3'
 *              - 'o' or 'O' is replaced by '0'
 *              - 't' or 'T' is replaced by '7'
 *              - 'l' or 'L' is replaced by '1'
 *
 * Return: A pointer to the modified string (str).
 */
char *leet(char *str)
{
char original[] = "aeotlAEOTL";  /* Characters to be replaced */
char leet[] = "4307143071";      /* Corresponding leet characters */
int i;                           /* Index for the input string */
int j;                           /* Index for the replacement characters */
for (i = 0; str[i] != '\0'; i++)  /* Loop through the input string */
{
for (j = 0; j < 10; j++)      /* Loop through the characters to replace */
{
if (str[i] == original[j])  /* Check for a match */
{
str[i] = leet[j];      /* Replace with corresponding leet character */
}
}
}
return str;  /* Return the pointer to the modified string */
}
