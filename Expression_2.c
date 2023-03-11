#include<stdio.h>

int main() {
	int x, y;
	
	printf("Please enter of x: \n");
	scanf("%d", &x);
	
	printf("Please enter of y: \n");
	scanf("%d", &y);
	
	(x == y && y < 10) ? printf("Expression is True\n") : printf("Expression is False\n");
	
	return 0;
}
