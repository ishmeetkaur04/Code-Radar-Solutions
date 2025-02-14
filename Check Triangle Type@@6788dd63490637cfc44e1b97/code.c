#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if (a==n && a==b && n==b){
        printf("Equilateral");
    }
    else if(a!=n && a!=b && n!=b){
        printf("Scalene");
    }
    else {
        printf("Isosceles");
    }
    return 0;
}