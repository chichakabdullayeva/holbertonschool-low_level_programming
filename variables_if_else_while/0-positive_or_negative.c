#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
if (n>0) {
	printf ("is positive\n");
}
else if (n ==0){
	printf("is zero");
}
else {
	printf ("is negative");
}
return 0;
