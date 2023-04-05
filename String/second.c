#include<stdio.h>
#include<string.h>

int main() {
	int n;
	char str[100], str1[100];
	
	printf("Please enter any number;0");
	gets(str);
	
// 	printf("Please enter any number;1");
// 	gets(str1);
		
// 	n = strlen(str);
// 	printf("%d", n);

    // strcpy(str1, str);
    // puts(str);
    
    // strcat(str, str1);
    // puts(str);
    
    // if (strcmp(str, str1) == 0) {
    //     printf("Both is same");
    // } else {
    //     printf("Both is Not same");
    // }
	
	strrev(str);
	puts(str);
	
	strlwr(str);
	puts(str);
	
	strupr(str);
	puts(str);
	
	return 0;
}
