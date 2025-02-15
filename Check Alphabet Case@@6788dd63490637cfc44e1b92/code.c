#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (isupper(ch)) {
        printf("The character '%c' is uppercase.\n", ch);
    } else if (islower(ch)) {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is neither uppercase nor lowercase.\n", ch);
    }

    return 0;
}
