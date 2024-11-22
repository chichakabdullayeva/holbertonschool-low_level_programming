#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: dog structure
 * Return: none
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: ");
if (d->name != NULL)
{
printf("%s\n", (*d).name);
}
else
printf("%s\n", "(nil)");
printf("Age: ");
if ((*d).age != 0.)
{
printf("%f\n", (*d).age);
}
else
printf("%f\n", 0.);
printf("Owner: ");
if ((*d).owner != NULL)
{
printf("%s\n", (*d).owner);
}
else
printf("%s\n", "(nil)");
}
