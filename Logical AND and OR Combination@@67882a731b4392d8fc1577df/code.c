#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if(a>0 && b<0){
        print("True")
    }
    else if(a==0 && b==0){
        print("True")
    }
    else{
        printf("False")
    }
    return 0;
}