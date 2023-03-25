#include<stdio.h>

int main() {
	
	int i,n,avg, sum=0;
	
	printf("enter any number:");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++) {
		sum = sum + i;
		printf("%d\n",i);
	}
	
	printf("your sum is:%d\n",sum);
	
	avg = sum / n;
	printf("your avg is:%d",avg);
	
	return 0;
}
