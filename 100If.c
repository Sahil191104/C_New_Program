#include<stdio.h>

int main() {
	int a;
	
	printf("Please enter of a: \n");
	scanf("%d", &a);
	
	if (a >= 100) {
		printf("A is grater than or equl to 100\n");
	} else {
		printf("A is Less than 100\n");
	}
	
	return 0;
}
