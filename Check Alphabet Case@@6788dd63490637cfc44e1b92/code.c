// Your code here...
#include<stdio.h>

int main(){
    int c;
    scanf("%c", &c);
    if(Uppercase(c)){
        printf("Uppercase");
    }
    else if(Lowercase(c)){
        printf("Lowercase");
    }
    return 0;
}