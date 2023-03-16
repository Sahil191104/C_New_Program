#include<stdio.h>

int main() {
	int a, b, c, d;
	
	printf("please enter any fourth number: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a>b) {
		if (a>c) {
			if (a>d) {
				printf("%d number is max",a);
			} else {
				printf("%d number is max",d);
			}
		} else {
			if (c>d) {
				printf("%d number is max",c);
			} else {
				printf("%d number is max",d);
			}
		}		
	} else {
		if (b>c) {
			if (b>d) {
				printf("%d number is max",b);
			} else {
				printf("%d number is max",d);
			}			
		} else {
			if (c>d) {
				printf("%d number is max",c);
			} else {
				printf("%d number is max",d);
			}
		}
	}
		
	return 0;
}
