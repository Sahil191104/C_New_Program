#include<stdio.h>

int main (){
	
	int n, rem=0, res=0;
	
	printf("enter any number:");
	scanf("%d", &n);
	
	while (n > 0) {
		rem = n % 10;
		res = res + (rem * rem * rem);
		n = n / 10;
	}
	
	printf("your number is:%d",res);
	
	return 0;
}
