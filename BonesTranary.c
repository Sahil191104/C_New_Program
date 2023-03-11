#include<stdio.h>

int main() {
	int bonus;
	
	printf("Please enter of Employees Salary is:");
	scanf("%d", &bonus);
	
	bonus <= 10000 ? printf("%d is Eligibel\n",bonus) : printf("%d is not Eligibel\n",bonus);
	
	return 0;
}
