#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string to be capitalized.
 *
 * Description: This function scans the input string and capitalizes
 *              the first letter of each word. Words are defined as 
 *              sequences of characters separated by spaces, tabs,
 *              new lines, or specific punctuation characters.
 *
 *              The separators include: space, tabulation, new line,
 *              comma, semicolon, period, exclamation mark, question 
 *              mark, double quote, parentheses, and curly braces.
 *
 * Return: A pointer to the modified string (str).
 */
char *cap_string(char *str)
{
int i;           /* Loop counter */
int capitalize;  /* Flag to indicate if capitalization is needed */
capitalize = 1;  /* Start with the assumption to capitalize */
for (i = 0; str[i] != '\0'; i++)
{
/* Check if the current character is a separator */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize = 1;  /* Set flag to capitalize the next character */
}
else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
/* Capitalize the character */
str[i] = str[i] - ('a' - 'A');
capitalize = 0;  /* Reset flag after capitalization */
}
else
{
capitalize = 0;  /* Reset flag if no capitalization is needed */
}
}
return (str);  /* Return the pointer to the modified string */
}
