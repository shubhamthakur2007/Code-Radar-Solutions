// Your code here...
#include <stdio.h>

int main() {
    int first, second;
    scanf("%d %d", &first, &second);
    
    if(first==second*second){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}