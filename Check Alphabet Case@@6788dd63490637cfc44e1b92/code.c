// Your code here...
#include<stdio.h>

int main(){
    int c;
    scanf("%c", &c);
    if(upper(c)){
        printf("Uppercase");
    }
    else if(lower(c)){
        printf("Lowercase");
    }
    return 0;
}