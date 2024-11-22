#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function
 * @nmemb: number of elements
 * @size: size of single byte
 * Return: memory allocated pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
str = malloc(nmemb * size);
if (str == NULL)
return (NULL);
while (i < size * nmemb)
{
*(str + i) = 0;
i++;
}
return (str);
}
