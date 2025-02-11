// Your code here...
#include<stdio.h>

int main(){
    int c;
    scanf("%c", &c);
    if(isupper(c)){
        printf("Uppercase");
    }
    else if(islower(c)){
        printf("Lowercase");
    }
    return 0;
}