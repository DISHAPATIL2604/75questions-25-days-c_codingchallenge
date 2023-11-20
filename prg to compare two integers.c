#include <stdio.h>

int main() {
    int a, b;

    // Get input from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Compare the two integers
    if (a == b) {
        printf("Both integers are equal.\n");
    } else if (a > b) {
        printf("The first integer is greater than the second integer.\n");
    } else {
        printf("The second integer is greater than the first integer.\n");
    }

    return 0;
}