#include <stdio.h>
int main(){int n;scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
int x;
for(int i=0;i<=n-1;i++){
    for(int j=i+1;j<=n-1;j++){
        if(arr[j+1]>arr[j] && arr[j+1]>arr[j+2]){
          x=arr[j+1];break;
        }
    }
}
printf("%d",x);

return 0;}
