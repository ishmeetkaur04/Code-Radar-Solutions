// Your code here...
#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
int c;
int max=arr[0]; int i;
for(i=0;i<n;i++){
    c=0;
    if(max<arr[i] && arr[i]%2==0 ){
       max=arr[i];
       c=1;
    }
    
}
if(c==0)printf("-1");
else
printf("%d",max);
    return 0;
}