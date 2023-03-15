#include<stdio.h>

int main() {
	int income, expenses, net_income, Total_net_income, Tax;
	
	printf("Please enter your Income:-");
	scanf("%d", &income);
	
	printf("Please enter your Expenses:-");
	scanf("%d", &expenses);
	
	net_income = income - expenses;
	
	if (net_income >= 0 && net_income <= 10000) {
		printf("\nNot to Pay any Tax\n");
	} else if (net_income >= 10000 && net_income <= 15000) {
//		Tax = net_income * 0.10;
		Total_net_income = net_income - (Tax= net_income * 0.10);
	} else if (net_income > 15000) {
//		Tax = net_income * 0.18;
		Total_net_income = net_income - (Tax=net_income * 0.18);
	}
	
	printf("Net Income is:- %d\n",net_income);
	printf("Tax is:- %d\n",Tax);
	printf("Total Net Income is:- %d\n",Total_net_income);
	
	return 0;
}
