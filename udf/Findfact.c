#include<stdio.h>

int findfact(int n) {
	
	if (n > 1) {
		return n * findfact(n - 1);
	} else {
		return 1;
	}
	
}

int main() {
	int n, ans;
	
	printf("Please enter of value: ");
	scanf("%d", &n);
	
	ans = findfact(n);
	
	printf("Find the fact is: %d", ans);
	
	return 0;
}
