#include <stdio.h>
int main(){int n;scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
int x=0;
for(int i=0;i<=n-1;i++){
 if(a[i+1]>a[i] && a[i+1]>a[i+2])
 x=a[i+1];
}
printf("%d",x);

return 0;}
