#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;i+j<2*i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}