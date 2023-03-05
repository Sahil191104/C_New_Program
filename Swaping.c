#include<stdio.h>

int main() {
	int a, b, tmp;
	
	printf("Please enter of A = ");
	scanf("%d",&a);
	
	printf("Please enter of B = ");
	scanf("%d",&b);
	
	tmp = a;
	a = b;
	b = tmp;
	
	printf("A = %d\n",a);
	printf("B = %d\n",b);
	
	return 0;
}
