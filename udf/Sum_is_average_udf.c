#include<stdio.h>

int Average(int n, int arr[], int i) {
	float average, sum = 0;
		
	for (i=0; i<n; i++) {
        sum = sum + arr[i];
        average = sum/n;
	}
	
	printf("Sum of Average Number is: %.2f", average);
	
	return average;
}

int main () {
	int arr[100], n, i, ans;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter element of array %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	ans = Average(n, arr, i);
	
	return 0;
}
