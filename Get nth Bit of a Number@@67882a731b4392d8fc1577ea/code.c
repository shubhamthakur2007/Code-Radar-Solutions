// Your code here...
#include <stdio.h>

int main() {
    unsigned int number, n;
    scanf("%u", &number);

    scanf("%u", &n);

    // Retrieve the nth bit
    unsigned int nthBit = (number >> n) & 1;

    printf("%u\n", n, nthBit);

    return 0;
}