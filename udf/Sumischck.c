#include<stdio.h>

int sumischeck(int arr[], int n) {
	int sum = 0, i;
	
	for (i=0; i<=n; i++) {
		sum = sum + arr[i];
	}
	
	printf("Ans is: %d", sum);
	
	return sum;
	
}

int main() {
	int arr[100], n, i, ans;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<=n; i++) {
		printf("Please enter any value %d :-", i);
		scanf("%d", &arr[i]);
	}
	
	ans = sumischeck(arr, n);
	
	return 0;
}
