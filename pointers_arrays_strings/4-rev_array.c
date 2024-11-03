#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers and reverses
 *              its content in place, modifying the original array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
int temp;  /* Temporary variable for swapping */
int i;     /* Loop counter */
for (i = 0; i < n / 2; i++)
{
/* Swap elements at indices i and n - 1 - i */
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
