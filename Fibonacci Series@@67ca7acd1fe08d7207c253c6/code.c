#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    // for(int i=0;i<n-1;i++){
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    if(n==1){
        printf("%d ",a);
    }
    else if(n==2){
        printf("%d %d ",a,b);
    }
    else{printf("%d %d ",a,b);
          for(int i=0;i<n-1;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    }
    return 0;
}