#include<stdio.h>

int main() {
	int num;
	
	printf("Please enter of a: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("%d is Even number\n",num);
	} else {
		printf("%d is Odd number\n",num);
	}
	
	return 0;
}
