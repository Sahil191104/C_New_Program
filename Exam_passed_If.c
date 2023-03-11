#include<stdio.h>

int main() {
	int p;
	
	printf("Please enter of Fabruary Number:");
	scanf("%d", &p);
	
	if (p >= 34) {
		printf("%d is Exam Passed\n",p);
	} else {
		printf("%d is not Exam Passed\n",p);	
	}
	
	return 0;
}
