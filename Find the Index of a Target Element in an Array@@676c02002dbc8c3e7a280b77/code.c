#include <stdio.h>
int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a;

scanf("%d",&a);int idx=0;
for(int i=0;i<n;i++){
    if(arr[i]==a){
        idx=i;
        
    }
    // else{printf("-1");}
}
printf("%d",idx);
    return 0;
}