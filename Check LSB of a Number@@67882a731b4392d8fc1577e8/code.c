// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // Check if LSB is set (1) or not (0)
    if (num & 1) {
        printf("Set \n");
    } else {
        printf("Not Set 0.\n");
    }
    
    return 0;
}