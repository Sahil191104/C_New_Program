#include<stdio.h>

int main() {
	int arr[100], n, i;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter element of array %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	printf("Ans element of array: ");
	for (i=0; i<n; i++) {
		if (arr[i] %2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
