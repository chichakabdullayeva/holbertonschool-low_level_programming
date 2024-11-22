#include <stdlib.h>
/**
 * array_range - creates array from mion to max
 * @min: first element of array
 * @max: maximum element of array
 * Return: int array from min to max
 */
int *array_range(int min, int max)
{
int *str, i = 0, a;
if (min > max)
return (NULL);
a = max - min;
str = malloc(a * sizeof(int) + sizeof(int));
if (str == NULL)
return (NULL);
while (i < a + 1)
{
*(str + i) = min + i;
i++;
}
return (str);
}
