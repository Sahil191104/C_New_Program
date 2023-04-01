#include<stdio.h>

void oddandeven() {
	int num;
	
	printf("Please enter of Number");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("%d is Even number\n",num);
	} else {
		printf("%d is Odd number\n",num);
	}
	
}
int main() {
	
	oddandeven();
	
	return 0;
}
