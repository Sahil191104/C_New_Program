#include<stdio.h>

int main() {
	int i, n, sum=0;
	
	printf("PLease enter any number:");
	scanf("%d", &n);
	
	for (i=0; i<=n; i++) {
		sum = sum + i;
	}
	
	printf("Sum is : %d", sum);
	
	return 0;
}
