#include<stdio.h>

int main() {
	int n, i, num;
	
	printf("Please enter any number: ");
	scanf("%d", &n);
	
	i = 1;
	
	do {
		printf("\nPlease enter number");
		scanf("%d", &num);
		
		if (num %7 == 0 || num %3 == 0) {
			printf("%d number is divisibele\n", num);
		} else {
			printf("%d number is not divisibele\n", num);
		}
		
		i++;
	} while (i<=n);
	
	return 0;
}
