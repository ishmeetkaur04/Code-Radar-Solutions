#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }int x,y;
     int nn; scanf("%d",&nn);
    for (int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==nn){
            printf("%d %d\n",a[i],a[j]);
        }
     }
    }
    return 0;
}