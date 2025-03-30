#include <stdio.h>
int main(){int n;scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
int x;
for(int i=0;i<=n-1;i++){
 if((arr[i+1]>arr[i]) && (arr[i+1]>arr[i+2]))
 {x=arr[i+1];break;}
 else printf("-1");
}
printf("%d",x);

return 0;}
