// Your code here...
#include<stdio.h>

int main(){
    int ch;
    scanf("%c", &ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else if(islower(ch)){
        printf("LOwercase");
    }
    return 0;
}