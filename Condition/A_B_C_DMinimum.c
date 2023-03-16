#include<stdio.h>

int main() {
	int a, b, c, d;
	
	printf("please enter any fourth number: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a<b) {
		if (a<c) {
			if (a<d) {
				printf("%d number is min",a);
			} else {
				printf("%d number is min",d);
			}
		} else {
			if (c<d) {
				printf("%d number is min",c);
			} else {
				printf("%d number is min",d);
			}
		}		
	} else {
		if (b<c) {
			if (b<d) {
				printf("%d number is min",b);
			} else {
				printf("%d number is min",d);
			}			
		} else {
			if (c<d) {
				printf("%d number is min:",c);
			} else {
				printf("%d number is min:",d);
			}
		}
	}
		
	return 0;
}
