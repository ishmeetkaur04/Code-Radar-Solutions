#include <stdio.h>
void reverse(int a[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

     return;
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&a[n]);
    }
    int b; scanf("%d",&b);
    b=b%n;
    reverse(a,0,n-1);
    reverse(a,0,b-1);
    reverse(a,b,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}