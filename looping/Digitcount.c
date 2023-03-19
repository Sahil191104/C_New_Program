#include<stdio.h>

int main() {
	int n, counter=0;
	
	printf("Please enter any number: ");
	scanf("%d", &n);
	
	while (n > 0) {
		n = n / 10;
		counter++;
	}
	
	printf("Count is: %d\n", counter);
	
	return 0;
}
