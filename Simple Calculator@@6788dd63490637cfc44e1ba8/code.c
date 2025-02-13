
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char d;
    scanf("%c",d);
 switch(d){
    case '+':
    printf("%d",a+b);
    break;
    case '-':
    printf("%d",a-b);
    break;
    case '*':
    printf("%d",a*b);
    break;
    case '/':
    printf("%d",a/b);
    break;
  
    // default:
    // printf("Invalid");
    // break;
 }

    return 0;
}