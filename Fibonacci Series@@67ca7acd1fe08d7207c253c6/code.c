int fibonacciSeries( int n){
    int a=0;
    int b=1;
    int c;
    if(n==1){
        printf("%d ",a);
    }
    else if(n==2){
        printf("%d %d ",a,b);
    }
    else{printf("%d %d ",a,b);
          for(int i=0;i<n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    }
}
 