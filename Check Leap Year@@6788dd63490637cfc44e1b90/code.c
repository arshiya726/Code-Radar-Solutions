#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a%400==0) && (a!=100)){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;

}