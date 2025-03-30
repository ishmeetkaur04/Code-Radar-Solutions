#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
int i;int j;int c;
for(i=0,j=n-1;i<j;i++,j--){
    c=0;
    if(arr[i]!=arr[j]){
       c=1;
       break;
    }
}
if (n==1) printf("YES");
else if(c==1)
printf("NO");
else printf("YES");
    return 0;
}