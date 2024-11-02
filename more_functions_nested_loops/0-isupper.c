#include <stdio.h>
#include "main.h"

int _isupper(int c)
/* isupper function checks if char is upper or not
*/
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
