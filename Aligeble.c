#include<stdio.h>

int main() {
	int age;
	
	printf("Please enter of Age: \n");
	scanf("%d", &age);
	
	age >= 18 ? printf("%d is Eligibel\n",age) : printf("%d is not Eligibel\n",age);
	
	return 0;
}
