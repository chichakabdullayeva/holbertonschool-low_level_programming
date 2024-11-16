#include <stdio.h>
#include <stdlib.h>  // For atoi()

/**
 * main - Multiplies each command-line argument by 2 and prints it
 * @argc: The number of command-line arguments
 * @argv: Array of strings representing the command-line arguments
 * 
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
/* Loop through each command-line argument */
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);  // Convert argument to an integer
printf("%d\n", num * 2);  // Print the result of multiplying by 2
}
return 0;
}
