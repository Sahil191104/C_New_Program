#include<stdio.h>

int main() {
	int p;
	
	printf("Please enter of Fabruary Number:");
	scanf("%d", &p);
	
	(p >= 34) ? printf("%d is Exam Passed\n",p) : printf("%d is not Exam Passed\n",p);
	
	return 0;
}
