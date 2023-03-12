#include<stdio.h>

int main() {
	int a, b;
	
	printf("Pease enter any two number");
	scanf("%d %d", &a, &b);
	
	if (a > b) {
		printf("%d is grater than %d",a , b);
	} else if (a < b) {
		printf("%d is less than %d",a , b);
	} else {
		printf("%d is equal to %d");
	}
	
	return 0;
}
