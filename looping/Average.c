#include<stdio.h>

int main() {
	int n, num, i, sum=0, Aver;
	
	printf("Please enter any number: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		sum = sum + arr[i];
	}
	
	Aver = sum/5;
	
	printf("Average: %d", Aver);
	
	return 0;
}
