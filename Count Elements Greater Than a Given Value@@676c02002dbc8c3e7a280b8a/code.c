#include <stdio.h>
int main(){int n;
scanf("%d ",&n);
int m;
scanf("%d",&m);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
int i;int c=0;
for(i=0;i<n;i++){
    if(arr[i]>m){
       c++;
    }
}
printf("%d",c);
    return 0;
}