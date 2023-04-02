#include<stdio.h>

float Average(float n) {
	float i, avg,sum=0,value;
	
	for (i=1; i<=n; i++) {
		printf("Please enter any Value:");
		scanf("%f", &value);
		
        	sum = sum + value;
        	avg = sum / 4;
	}
	
	printf("your avg is:%f",avg);
}
int main() {
	float n;
	
	printf("enter any number:");
	scanf("%f",&n);
	
	Average(n);
	
	return 0;
}
