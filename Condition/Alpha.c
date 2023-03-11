#include<stdio.h>

int main() {
	char ch;
	
	printf("Please enter any charcter: ");
	scanf("%c", &ch);
	
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		printf("Alphabet\n");
	} else if (ch >= '0' && ch <= '9') {
		printf("Number\n");
	} else {
		printf("Spacial charcter\n");
	}
	
	return 0;
}
