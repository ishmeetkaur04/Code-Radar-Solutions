#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }

    return 0;
}