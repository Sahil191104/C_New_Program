#include<stdio.h>

int main() {
	int age;
	
	printf("Please enter of age: ");
	scanf("%d", &age);
	
	if (age >= 18) {
		printf("%d is Eligibel\n",age);
	} else {
		printf("%d is not Eligibel\n",age);
	}
	
	return 0;
}
