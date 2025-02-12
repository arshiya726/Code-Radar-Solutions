#include<stdio.h>
int main(){
    int a;
    int b;
    if(a>=18 || b==1)
    {
        printf("Eligible");
    }
    else if(a<18 || b==0)
    {
        printf("Not Eligible");
    }

    return 0;

}