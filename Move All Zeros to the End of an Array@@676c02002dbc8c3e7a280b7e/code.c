#include <stdio.h>
int main(){int n; scanf("%d",&n);
    int brr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&brr[i]);
    }
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(brr[j]==0){
int temp=brr[j];
            brr[j]=brr[j+1];
            brr[j+1]=temp;
        }
    }
}
for(int i=0;i<n;i++){
 printf("%d ",brr[i]);
}return 0;}