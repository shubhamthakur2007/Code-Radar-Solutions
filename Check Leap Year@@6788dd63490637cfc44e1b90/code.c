#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    if(year %4 == 0){
        printf("Leap Year");
    }
    else if(year %100 != 0){
        print("Not Leap Year");
    }
}