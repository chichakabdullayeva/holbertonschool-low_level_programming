#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc > 2)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
