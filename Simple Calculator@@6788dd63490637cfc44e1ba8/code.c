#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    scanf("%d", &num1);
    scanf(" %c", &operator);  
    scanf("%d", &num2);
    switch(operator) {
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
