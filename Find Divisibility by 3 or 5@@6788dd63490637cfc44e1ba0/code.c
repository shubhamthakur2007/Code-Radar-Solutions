// Your code here...
// Your code here...
#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num %3 ==0 && num %5 ==0){
        printf("Divisible by both");
    }
    else if(num%3==0){
        printf("Divisible by 3");
    }
    return 0;
}