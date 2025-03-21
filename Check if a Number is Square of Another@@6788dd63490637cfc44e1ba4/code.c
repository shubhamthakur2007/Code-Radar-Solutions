// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    if (num1 == num2 * num2) {
        printf("%d Yes %d.\n", num1, num2);
    } else {
        printf("%d No %d.\n", num1, num2);
    }
    
    return 0;
}
