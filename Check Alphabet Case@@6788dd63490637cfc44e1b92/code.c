#include<stdio.h>
int main(){
    int c;
    scanf("%c", &c);
    if (c>='A'&&c<='Z'){
        printf("Uppercase");
    }
    else if (c>='a'&& c<='z'){
        printf("Lowercase");
    }
    else{
        ("Not an alphabet");
    }
    return 0;
}