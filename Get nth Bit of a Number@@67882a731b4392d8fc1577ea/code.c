// Your code here...
#include <stdio.h>

int main() {
    unsigned int number, n;
    scanf("%u", &number);

    printf("Enter the bit position (n): ");
    scanf("%u", &n);

    // Retrieve the nth bit
    unsigned int nthBit = (number >> n) & 1;

    printf("The value of bit %u is: %u\n", n, nthBit);

    return 0;
}