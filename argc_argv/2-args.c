#include <stdio.h>
#include "main.h"
/**
 * main - Prints all the command line arguments
 * @argc: Number of command line arguments
 * @argv: Array of strings representing command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
/* Loop through each argument and print it */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
