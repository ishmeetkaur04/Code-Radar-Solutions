#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
int max=arr[0]; int i;
for(i=0;i<n;i++){
if(max<arr[i] && arr[i]%2==0 ){
       max=arr[i];
    }
}
printf("%d",max);
    return 0;
}