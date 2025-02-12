#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    c = tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("Vowel");
    }
    else if(c>='0' && c <='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;

}