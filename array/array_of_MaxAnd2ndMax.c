#include<stdio.h>

int main() {
	int arr[100], n, i, m1 = 0, m2 = 0;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter value of array: ");
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		if (arr[i] > m1) {
			m2 = m1;
			m1 = arr[i];
		} else if (arr[i] > m2 && arr[i] < m1) {
			m2 = arr[i];
		}
	}
	
	printf("Maximum is: %d\n", m1);
	printf("2nd Maximum is: %d", m2);
	
	return 0;
}
