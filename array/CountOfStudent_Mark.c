#include<stdio.h>

int main() {
	int arr[16] = {85, 66, 37, 45, 68, 23, 99, 100, 81, 70, 42, 55, 68, 77, 96, 18};
	int n, i;
	int count[]={0,0,0,0,0,0,0,0,0,0,0};
	
	for (i=0; i<n; i++) {
		if (arr[i] > 0 && arr[i] < 9) {
			count[0]++;
		} else if (arr[i] > 10 && arr[i] < 19) {
			count[1]++;
		} else if (arr[i] > 20 && arr[i] < 29) {
			count[2]++;
		} else if (arr[i] > 30 && arr[i] < 39) {
			count[3]++;
		} else if (arr[i] > 40 && arr[i] < 49) {
			count[4]++;
		} else if (arr[i] > 50 && arr[i] < 59) {
			count[5]++;
		} else if (arr[i] > 60 && arr[i] < 69) {
			count[6]++;
		} else if (arr[i] > 70 && arr[i] < 79) {
			count[7]++;
		} else if (arr[i] > 80 && arr[i] < 89) {
			count[8]++;
		} else if (arr[i] > 90 && arr[i] < 99) {
			count[9]++;
		} else if (arr[i] > 100) {
			count[10]++;
		}
	}
	
	printf("0 to 9: %d\n", count[0]);
	printf("10 to 19: %d\n", count[1]);
	printf("20 to 29: %d\n", count[2]);
	printf("30 to 39: %d\n", count[3]);
	printf("40 to 49: %d\n", count[4]);
	printf("50 to 59: %d\n", count[5]);
	printf("60 to 69: %d\n", count[6]);
	printf("70 to 79: %d\n", count[7]);
	printf("80 to 89: %d\n", count[8]);
	printf("90 to 99: %d\n", count[9]);
	printf("100: %d", count[10]);
	
	return 0;
}
