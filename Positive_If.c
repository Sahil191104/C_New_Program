#include<stdio.h>

int main() {
	int a;
	
	printf("Please enter of a: \n");
	scanf("%d", &a);
	
	if (a >= 0) {
		printf("%d is Positive number\n",a);
	} else {
		printf("%d is Nagetive number\n",a);
	}
	
	return 0;
}
