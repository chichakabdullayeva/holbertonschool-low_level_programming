#include "main.h"

/**
 * _strncpy - Copies up to n characters from the string src to dest.
 * @dest: The destination string where the content is to be copied.
 * @src: The source string from which to copy.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the destination string dest.
 *         If the length of src is less than n, the remaining characters
 *         in dest will be filled with null bytes.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];  /* Copy character from src to dest */
}    
for (; i < n; i++)
{
dest[i] = '\0';  /* Fill remaining dest with null bytes */
}
return dest;  /* Return pointer to the destination string */
}
