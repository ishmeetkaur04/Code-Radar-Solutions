#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int fact=0;
for (int i=2;i<n;i++){
    if (n%i==0){
        fact+=1;
        break;
    }

}
if (fact==0){
    printf("Prime");
}
else{
    printf("Not Prime");
}
    return 0;
}