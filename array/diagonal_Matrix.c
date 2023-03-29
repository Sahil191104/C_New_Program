#include<stdio.h>

int main() {
	int arr[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 84, 99}
	};
	int i, j, sum = 0;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (i == j) {
				sum = sum + arr[i][j];
			}
		}
	}
	
	printf("Sum is: %d", sum);
	
	return 0;
}
