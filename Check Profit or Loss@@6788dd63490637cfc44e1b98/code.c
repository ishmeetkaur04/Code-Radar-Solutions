#include <stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    if (a>n){
        printf("Profit");
    }
    else if(n>a){
        printf("Loss");
    }

    
    else {
        printf("No Profit No Loss");
    }
    return 0;
}