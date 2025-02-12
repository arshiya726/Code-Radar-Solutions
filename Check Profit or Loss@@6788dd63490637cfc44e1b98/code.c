#include<stdio.h>
int main(){
    int sp,cp;
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf('Profit');
    }
    else if(cp>sp){
        printf('Loss');
    }
    else{
        printf(''No Profit No Loss');
    }
    return 0;

}