#include<stdio.h>

int main() {
	int x, y;
	
	printf("Please enter of x: \n");
	scanf("%d", &x);
	
	printf("Please enter of y: \n");
	scanf("%d", &y);
	
	if (x == y && y < 10) {
		printf("Expression is True\n");
	} else {
		printf("Expression is False\n");
	}
	
	return 0;
}
