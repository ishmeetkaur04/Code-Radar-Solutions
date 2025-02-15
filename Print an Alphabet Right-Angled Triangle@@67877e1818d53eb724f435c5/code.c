// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
for (int i=65;i<=n+64;i++){
    for (int j=65;j<2*i+64;j++){
        char n=(char)j;
        printf("%c",n);
    }
    printf("\n");
}
    return 0;
}