#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
   for (int i=1;i<=n;i++){
    for (int k=1;k<=n-i;k++){
        printf(" ");
    }
    for (int j=1;j<2*i;j++){
        printf("*");
    }
printf("\n");

   }
    return 0;
}