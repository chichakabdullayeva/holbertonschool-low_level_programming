#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars initialized with a specific char.
 * @size: Array size.
 * @c: Char to initialize the array with.
 *
 * Return: Pointer to the array, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
