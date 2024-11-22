#include <stdlib.h>
/**
 * array_range - creates array from min to max
 * @min: first element of array
 * @max: maximum element of array
 * Return: int array from min to max
 */
int *array_range(int min, int max)
{
 int *str, i = 0, a;
if (min > max)
return (NULL);
a = max - min + 1;  // +1 to include max value in the range
str = malloc(a * sizeof(int));  // Allocate memory for 'a' integers
if (str == NULL)
return (NULL);
while (i < a)
{
*(str + i) = min + i;
i++;
}
return (str);
}
