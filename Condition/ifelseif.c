#include<stdio.h>

int main() {
	int num;
	
	printf("Please enter any number: ");
	scanf("%d", &num);
	
	if (num > 0) {
		printf("Number is Positive\n");
	} else if (num < 0) {
		printf("Number is Nageitive\n");
	} else {
		printf("Number is Zero\n");
	}
	
	return 0;
}
