#include<stdio.h>

int main() {
	int arr[100], n, i, sum = 0;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter element of array %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		if (arr[i] %2 == 0) {
           	sum = sum + arr[i];
        }
	}
	
	printf("Sum of Even Number is: %d", sum);
	
	return 0;
}
