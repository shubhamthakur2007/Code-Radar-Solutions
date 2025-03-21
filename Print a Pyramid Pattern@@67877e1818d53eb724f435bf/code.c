// Your code here...
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
     for (int i = 1; i <= N; i++) {
        // Print leading spaces to center the stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print stars for the current row
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
    printf("\n");

    return 0;
     }
}