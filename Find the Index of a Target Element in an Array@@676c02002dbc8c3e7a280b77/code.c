#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a;
int y;
scanf("%d",&a);int idx=0;
for(int i=0;i<n;i++){
    if(arr[i]==a){
        idx=i;
        y=a[i];
        break;
    }
}
if(y==a[i])
printf("%d",idx);
else printf("-1");
    return 0;
}