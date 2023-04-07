#include <stdio.h>

    int main() {
    char str[100];
    int i,len = 0;
    
    printf("Pls Enter Any string : ");
    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}

