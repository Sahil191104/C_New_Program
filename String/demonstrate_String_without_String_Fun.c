#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    
    printf("Please Enter Any string : ");
    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    printf("The length of the string is: %d\n", len);

    return 0;
}

