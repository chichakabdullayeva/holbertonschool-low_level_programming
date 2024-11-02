#include <stdio.h>
#include "main.h"

/**
 * isupper function checks if char is upper or not 
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
