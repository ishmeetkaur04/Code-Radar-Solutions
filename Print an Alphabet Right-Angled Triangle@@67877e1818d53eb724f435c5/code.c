// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=65;i<=n+65;i++){
        for (int j=65;i+j<((2*i)+65);j++){
            char new=(char)j
            printf("%c ",new);
        }
        printf("\n");
    }
    return 0;
}