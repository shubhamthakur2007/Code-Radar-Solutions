// Your code here...
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);

    scanf("%d", &b);

    if ((num1 >= 0 && num2 >= 0) || (num1 < 0 && num2 < 0)) {
        printf("Same Sign\n");
    } else {
        printf("Different Sign\n");
    }

    return 0;
}
