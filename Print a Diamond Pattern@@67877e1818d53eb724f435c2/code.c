#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
printf(" ");
        }
        for (int k=1;k<2*i;k++){
printf("*");
        }
        printf("\n");
    }
        for (int i=1;i<n;i++){
        for (int j=1;j<=i;j++){
printf(" ");
        }
        for (int k=n;k>=1;k=k-2){
printf("*");
        }
        printf("\n");
    }
    return 0;
}