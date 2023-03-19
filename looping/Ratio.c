#include<stdio.h>

int main() {
	int a, b, c, d, ans, i;
	
	for (i=1; i<=3; i++) {
		printf("Please enter any Four number");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if (c == d) {
			printf("Ratio ti not Possible");
		} else {
			ans = (a-b)/(c-d);
			printf("Ans is: %d\n", ans);
		}
	}
	
	return 0;
}
