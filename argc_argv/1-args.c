#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of strings representing command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
/* Print the number of command line arguments */
printf("%d\n", argc - 1);
return (0);
}

