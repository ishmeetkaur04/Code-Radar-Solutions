#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
}
int a;
int idx=0;
scanf("%d",&a);
for(int i=0;i<n;i++){
    if(a[i]==x){
        idx=i;
        break;
    }
}
printf("%d",i);
    return 0;
}