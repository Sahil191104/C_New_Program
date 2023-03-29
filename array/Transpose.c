#include<stdio.h>

int main() {
	int arr[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 84, 99}
	};
	int res[3][3] = {0};
	
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			res[j][i] = arr[i][j];
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
