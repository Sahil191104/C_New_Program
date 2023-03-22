#include<stdio.h>

int main() {
	int i,electricity, month_Number,Res,salary, marketing,n;
	
	printf("Please enter any number:");
	scanf("%d", &n);
	
	for (i=0; i<=n; i++) {
		
		printf("\nEnter of The Month number:");
		scanf("%d", &month_Number);
		
		printf("Electricity is:");
		scanf("%d", &electricity);
		
		printf("Salary is:");
		scanf("%d", &salary);
		
		printf("Marketing is:");
		scanf("%d", &marketing);
		
		Res =electricity+salary+marketing;
		
		printf("Ans is:%d\n",Res);
		printf("Marketing is:%d\n",month_Number);
		
	}
	
	return 0;
}
