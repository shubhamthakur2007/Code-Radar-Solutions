// Your code here...
#include<stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1 &num2);
    if(num1 > num2){
        printf("greater %d", num1);
    }
    else if(num2 > num1){
        printf("greater %d", num2);
    }
    else{
        printf("not greater %d");
    }
}