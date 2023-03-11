#include<stdio.h>

int main() {
	float per;
	
	printf("Please enter any charcter: ");
	scanf("%f", &per);
	
	if (per >=91 && per <= 100) {
		printf("Grade: A");
	} else if (per >= 81 && per <= 91) {
		printf("Grade: B");
	} else if (per >= 71 && per <= 81) {
		printf("Grade: C");
	} else if (per >= 61 && per <= 71) {
		printf("Grade: D");
	} else if (per >= 41 && per <= 61) {
		printf("Grade: E");
	} else if (per >= 0 && per <= 41) {
		printf("Failed");
	} else {
		printf("Invalid Input");
	}
	
	return 0;
}
