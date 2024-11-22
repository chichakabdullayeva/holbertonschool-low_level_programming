#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory for integer
 * @b: variable for constructor
 * Return: memory allocation
 */
void *malloc_checked(unsigned int b)
{
int *a;
a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
