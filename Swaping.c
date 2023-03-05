#include<stdio.h>

int main(){
	int a=99,b=89,tmp;
	
	tmp = a;
	a = b;
	b = tmp;
	
	printf("A :- %d\n",a);
	printf("B :- %d",b);
	
	return 0;
}
