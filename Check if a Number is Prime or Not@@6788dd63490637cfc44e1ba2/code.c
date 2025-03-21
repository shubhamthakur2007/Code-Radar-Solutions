// Your code here...
#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    scanf("%d", &number);

    if (number <= 1) {
    }

    // Check divisibility from 2 to sqrt(number)
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrime = 0; // Not a prime number
            break;
        }
    }

    if (isPrime) {
        printf("%d Prime\n", number);
    } else {
        printf("%d Not Prime\n", number);
    }

    return 0;
}
