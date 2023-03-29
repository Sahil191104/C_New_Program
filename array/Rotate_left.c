#include<stdio.h>

int main() {
	int arr[100], i, n, first = 0;
	
	printf("PLease enter size of an array");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter an Element");
		scanf("%d", &arr[i]);
	}
	
	first = arr[0];
	
	for (i=0; i<n; i++) {
		arr[i] = arr[i+1];
	}
	
	arr[n-1] = first;
	
	for (i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0; 
}
