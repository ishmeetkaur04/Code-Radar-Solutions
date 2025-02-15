#include <stdio.h>
int main() {
    int num1, num2;
    char oper;
    scanf("%d %d %c", &num1,&num2,&oper);
    switch(oper) {
        case '+':
            printf("%d",num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d",num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
