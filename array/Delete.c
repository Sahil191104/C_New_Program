#include<stdio.h>

int main() {
	int arr[100], n, i, m1 = 0, m2 = 0, i1;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter value of array: ");
		scanf("%d", &arr[i]);
	}
	
	printf("Which element so yo need to change?");
	scanf("%d", &i1);
	
	n--;
	
	for (i=i1-1; i<=n; i++) {
		arr[i] = arr[i+1];
	}
	
	for (i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
