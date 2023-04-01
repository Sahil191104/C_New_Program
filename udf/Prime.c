#include<stdio.h>

int prime() {
	int n, i, flag = 0;
	
	printf("Please enter any number: ");
	scanf("%d", &n);
	
	if (n > 1) {
		if (n == 2) {
			printf("%d is prime number", n);
		} else {
			for (i=2; i<n; i++) {
				if (n %i == 0) {
					flag = 1;
					break;
				}
			}
			
			if (flag == 0) {
				printf("%d is prime number", n);
			} else {
				printf("%d is Not prime number", n);
			}
		}
	} else {
		printf("Not decidable");
	}
	
	return n;
}
int main() {
	int res, res1;
	
	res = prime();
	printf("\nResult is: %d", res);
	
	return 0;
}
