#include <stdio.h>

int main() {
    int N, i, j, space;
    
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Print leading spaces
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
