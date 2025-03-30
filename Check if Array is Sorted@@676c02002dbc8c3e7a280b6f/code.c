#include <stdio.h>
int main(){int n;scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

for(int i=0;i<n;i++){
    int c=0;
    if(brr[i]==arr[i]){
        c=1;
    }
}
if(c==1){
    printf("Sorted");
}
else {
    printf("Not Sorted");
}
return 0;}
