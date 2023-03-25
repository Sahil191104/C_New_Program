#include<stdio.h>

int main() {
	int arr[100], i, n;
	
	printf("Please enter any value of Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Enter the value of Array: ");
		scanf("%d", &arr[i]);
	}
	
	printf("\nAns is Array: ");
	for (i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
