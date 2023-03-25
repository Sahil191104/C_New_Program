#include<stdio.h>

int main() {
	int roll[5] = {51 , 42, 86, 31, 321}, i;
	
	for (i=0; i<=4; i++) {
		if (roll[i] %2 == 0) {
			printf("%d\n", roll[i]);
		}
	}
	
	return 0;
}
