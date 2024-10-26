#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL)); // Seed the random number generator
    int n = rand() % (RAND_MAX + 1) - (RAND_MAX / 2); // Random number in range [-RAND_MAX/2, RAND_MAX/2]

    printf("The number is %d: ", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
