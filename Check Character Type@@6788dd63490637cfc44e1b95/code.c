#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }
    else if((ch>='a' && ch>='z') || (ch>'A' && ch>='Z')){
        printf("Consonant");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
