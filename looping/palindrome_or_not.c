#include <stdio.h>

int main() {
    int num, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    printf("The reverse of %d is: %d\n", num, rev);
    if (num == rev) {
        printf("%d is a palindrome number", num);
    } else {
        printf("%d is not a palindrome number", num);
    }

    return 0;
}
