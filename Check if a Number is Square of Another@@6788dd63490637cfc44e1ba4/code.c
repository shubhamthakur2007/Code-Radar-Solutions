// Your code here...
#include <stdio.h>

int main() {
    int n, nu;
    scanf("%d %d", &n, &nu);
    
    if (n == nu * nu) {
        printf("Yes %d\n");
    } else {
        printf("No %d\n");
    }
    
    return 0;
}
