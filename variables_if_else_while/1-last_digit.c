#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int n;

    srand(time(0)); // Seed the random number generator
    n = rand(); // Assign a random number to n

    int last_digit = n % 10; // Get the last digit of n

    printf("Last digit of %d is ", n);

    if (last_digit > 5) {
        printf("%d and is greater than 5\n", last_digit);
    } else if (last_digit == 0) {
        printf("%d and is 0\n", last_digit);
    } else {
        printf("%d and is less than 6 and not 0\n", last_digit);
    }

    return 0;
}

