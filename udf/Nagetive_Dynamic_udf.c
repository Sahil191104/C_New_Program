#include<stdio.h>

void nagetive(int arr[], int n, int i) {
	
	printf("Ans element of array: ");
	for (i=0; i<n; i++) {
		if (arr[i] < 0) {
			printf("%d ", arr[i]);
		}
	}
	
}

int main () {
	int arr[100], n, i, ans;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter element of array %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	nagetive(arr, n, i);
	
	return 0;
}
