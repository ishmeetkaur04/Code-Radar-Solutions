#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;i+j<=n+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}