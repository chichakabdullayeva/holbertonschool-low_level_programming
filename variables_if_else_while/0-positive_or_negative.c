#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;
scanf ("%d",&n);
printf ("%d",n);
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return (0);
}
    
