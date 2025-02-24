#include "main.h"
#include <string.h>
/**
 * _strstr - Entry point
 *
 * @haystack: 'varaibles'
 * @needle: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
