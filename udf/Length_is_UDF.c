#include<stdio.h>

int FindStringLength(char str[]) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100], length = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    length = FindStringLength(str);
    
    printf("Length is:- %d\n", length);
    
    return 0;
}
