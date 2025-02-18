// Your code here...
#include<stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>=num2 && num1<=num3){
        printf("%d", num1);
    }
    
    return 0;
}