#include<stdio.h>

int main() {
	int arr1[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 84, 99}
	};
	int arr2[3][3] = {
		{11, 25, 86},
		{22, 32, 71},
		{33, 88, 99}
	};
	int res[3][3] = {0};
	
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			res[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", res[i][j]);
		}
			printf("\n");
	}
	
	return 0;
}
