#include<stdio.h>

int main() {
	int year;
	
	printf("Please enter any Year:");
	scanf("%d", &year);
	
	if (year % 400 == 0) {
		printf("Leep Year;");
	} else if (year % 100 == 0) {
		printf("Not Leep Year;");
	} else if (year % 4 == 0) {
		printf("Leep Year");
	} else {
		printf("Not Leep Year");
	}
	
	return 0;
}
