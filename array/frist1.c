#include<stdio.h>

int main() {
	int roll[5] = {-52, 32, -62, 97, 12} , i;
	
	for (i=0; i<=4; i++) {
		if (roll[i] < 0) {
			printf("%d\n", roll[i]);
		}
	}
	
	return 0;
}
