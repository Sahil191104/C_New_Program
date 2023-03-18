#include<stdio.h>

int main() {
	int i, count=0;
	float weight, heigth;
	
	for (i=1; i<=3; i++) {
		printf("Please enter your Weight and Heigth");
		scanf("%f %f", &weight, &heigth);
		
		if (weight <= 50 && heigth >= 170) {
			count++;
		}
	}
	
	printf("Boys count is : %d", count);
	
	return 0;
}
