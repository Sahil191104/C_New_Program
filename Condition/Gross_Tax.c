#include<stdio.h>

int main() {
	int Gross,total;
	
	printf("Please enter any number:");
	scanf("%d", &Gross);
	
	if (Gross <= 2000) {
		printf("No tax deduction");
	} else if (Gross > 2000 && Gross <= 4000) {
		total = (Gross * 3)/100;
	} else if (Gross > 4000 && Gross <= 5000) {
		total = (Gross * 5)/100;
	} else if (Gross > 5000) {
		total = (Gross * 8)/100;
	}
	
	printf("Ans is: %d",total);
	
	return 0;
}
