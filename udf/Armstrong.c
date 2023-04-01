#include<stdio.h>

int armstrong() {
	int i, temp, rem = 1, res = 0;
	
	for (i=1; i<=1000; i++) {
		temp = i;
		
		while (temp > 0) {
			rem = temp % 10;
			res = res + (rem * rem * rem);
			temp = temp / 10;
		}
		
		if (res == i) {
			printf("%d is Aremstrong\n", i);
		}
		
		res = 0;
	}
	
	return res;
}

int main() {
	int ans, n;
	
	printf("Please enter any number:");
	scanf("%d", &n);
	
	ans = armstrong();
	
	return 0;
}
