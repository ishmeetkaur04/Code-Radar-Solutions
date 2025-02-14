#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if (n+a>b && a+b>n && n+b>a){
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}