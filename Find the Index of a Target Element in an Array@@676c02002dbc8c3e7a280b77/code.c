#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a;
int y;
int i;
scanf("%d",&a);int idx=0;
for(i=0;i<n;i++){
    if(arr[i]==a){
        idx=i;
        y=arr[i];
        break;
    }
}
if(y==arr[i])
printf("%d",idx);
else printf("-1");
    return 0;
}