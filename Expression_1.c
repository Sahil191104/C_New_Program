#include<stdio.h>

int main() {
	int x, y;
	
	printf("Please enter of x: \n");
	scanf("%d", &x);
	
	printf("Please enter of y: \n");
	scanf("%d", &y);
	
	(x > 100) || (x != y) || (y < 50) ? printf("Expression is True\n") : printf("Expression is False\n");
	
	return 0;
}
