// Your code here...
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
     for (int i = 1; i <= N; i++) {
        // Print leading spaces for pyramid shape
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print the stars for each row
        for (int j = 1; j <= (N * i - 1); j++) {
            printf("*");
        }
    printf("\n");

    return 0;
}