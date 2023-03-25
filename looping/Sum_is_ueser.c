#include <stdio.h>

int main() {
    int sum = 0, x, i, rem;
    
    printf("Please enter any number of X");
	scanf("%d", &x);
	
	while (x > 0) {
		
		rem = x % 10;
		sum = sum + rem;
		x = x / 10;
	}
	
	printf("Sum is: %d", sum);
	
    return 0;
}
