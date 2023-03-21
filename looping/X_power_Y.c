#include<stdio.h>

int main() {
	int x, y, p = 1, i;
	
	printf("PLease enter X value = ");
	scanf("%d", &x);
	
	printf("PLease enter Y value = ");
	scanf("%d", &y);
	
	for (i=1; i<=y; i++) {
		p = p * x;
	}
	
	printf("Ans is = %d", p);

	return 0;
}
