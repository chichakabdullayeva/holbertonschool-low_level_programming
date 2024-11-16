#include <stdio.h>
#include <stdlib.h>  // For atoi()

/**
 * main - Multiplies two numbers passed as command line arguments
 * @argc: The number of command line arguments
 * @argv: Array of strings representing command line arguments
 * 
 * Return: 0 if successful, 1 if there are less than 2 arguments
 */
int main(int argc, char *argv[])
{
/* Check if there are at least two arguments */
if (argc > 2)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));  // Multiply arguments and print result
}
else
{
printf("Error\n");  // Print error message if not enough arguments
return (1);  // Return 1 to indicate an error
}
return (0);  // Return 0 to indicate success
}
