#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf(" a is greater\n");
    }
    else if(b>a){
        printf("b is greater\n");
    }
    else{
        printf("both are equal\n");
    }
    return 0;

}