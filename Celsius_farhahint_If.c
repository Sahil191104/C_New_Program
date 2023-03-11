#include<stdio.h>

int main()
{
	float cel,far;
	
	printf("Enter tempreture in celsius:");
	scanf("%f",&cel);
	
	if ((far = (cel * 1.8) + 32) <= 105) {
		printf("tempreture is Medium : %f",far);
	} else {
		printf("tempreture is Hot : %f",far);
	}
	
	return 0;
}
