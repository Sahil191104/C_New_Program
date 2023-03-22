#include<stdio.h>

int main() {
	int n, i, j, m, Roll_Number, sub, total;
	
	printf("Please enter No Of Student and Subject: \n");
	scanf("%d %d", &n, &m);
	
	for (i=1; i<=n; i++) {
		
		printf("PLease enter any Roll Number:- ");
		scanf("%d", &Roll_Number);
		
		total=0;
		
		for (j=1; j<=m; j++) {
			
			printf("PLease enter Subject:- ", j);
			scanf("%d", &sub);
			
			total = total + sub;
			
		}		
		
		printf("PLease enter Total: %d\n", total);
		printf("PLease enter Roll Number: %d\n", Roll_Number);
		
		if(total > 450) {
			printf("Grade:A\n\n");
		} else if (total > 350) {
			printf("Grade:B\n\n");
		} else {
			printf("Grade:c\n\n");
		}
		
	}
	
	return 0;
}
