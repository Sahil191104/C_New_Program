#include<stdio.h>

int main() {
	int n, rem = 0, res = 0;
	
	printf("Please enter any number: ");
	scanf("%d", &n);
	
	for (i=1; i<=1000; i++) {
		while (i > 0) {
			rem = i % 10;
			res = res + (rem * rem * rem);
			n = i / 10;
		}
		if (i == res) {
			printf("%d is Armstrong", rse);
		} else {
		
		}
	}
	
	printf("Ans is %d", res);
	
	return 0;
}
