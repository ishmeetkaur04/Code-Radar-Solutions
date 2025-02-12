#include <stdio.h>
int main(){
    char n ;
 scanf("%d",&n);
 switch(n){
    case 'R':
    printf("Stop");
    break;
    case 'G':
    printf("Go");
    break;
    case 'Y':
    printf("Slow Down");
    break;
 }
    return 0;
}