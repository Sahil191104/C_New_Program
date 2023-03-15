#include<stdio.h>

int main() {
	int age, weight;
	
	printf("Please enter your Age and weight:-");
	scanf("%d %d", &age, &weight);
	
	if (age >= 18) {
		if (weight >= 50) {
			printf("You are Eligibel\n");
		} else {
			printf("Your Weight is under 50.\n");
		}
	} else {
		printf("Your Weight is Not under 50.\n");
	}
	
	return 0;
}
