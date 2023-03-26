#include<stdio.h>

int main() {
	int arr[100], n, i, max = 0;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter element of array %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		if (arr[i] > max) {
           		max = arr[i];
        	}
	}
	
	printf("Maximum Number is: %d", max);
	
	return 0;
}
