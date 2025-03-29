#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
     int c=0;
     int m=0;
 for (int i=0;i<n;i++){
        if(a[i]%2==0){
            c++;
        }
        else m++;
    }
    printf("%d %d",c,m);
    return 0;
}