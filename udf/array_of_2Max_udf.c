#include<stdio.h>

int 2max(int n, int arr[], int i) {
	int m1 = 0, m2 = 0;
	
	for (i=0; i<n; i++) {
		if (arr[i] > m1) {
			m2 = m1;
			m1 = arr[i];
		} else if (arr[i] > m2 && arr[i] != m1) {
			m2 = arr[i];
		}
	}
	
	printf("2nd Maximum is: %d", m2);	
	
	return m2;
}

int main () {
	int n, i, arr[100], ans;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter value of array: ");
		scanf("%d", &arr[i]);
	}
	
	ans = 2max(n, arr, i);
	
	return 0;
}
