#include <stdio.h>
int main(){
    int a[100];
    int n; scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
     int b; scanf("%d",&b);
     b=b%n;
      for (int i=0;i<=n-1;i++){
       a[i]=a[n-i-1];
    }
     for (int i=0;i<=k-1;i++){
       a[i]=a[n-i-1];
    }
     for (int i=k;i<=n-1;i++){
    a[i]=a[n-i-1];    
    }
   for (int i=0;i<=n-1;i++){
       printf("%d\n",a[i]);
    }
    return 0;
}