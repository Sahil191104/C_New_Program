#include<stdio.h>

int main() {
	int f;
	
	printf("Please enter of Fabruary Number:");
	scanf("%d", &f);
	
	if (f == 28 || f == 29) {
		printf("%d is Fabruary Number\n",f);
	} else {
		printf("%d is not Fabruary Number\n",f);
	}
	
	return 0;
}
