#include<stdio.h>

int main() {
	float unit , bill, total_bill;
	
	printf("Please enter Electrictiy Unit:");
	scanf("%f", &unit);
	
	if (unit >= 0 && unit <= 50) {
		bill = unit * 0.50;
	} else if (unit > 50 && unit <= 150) {
		bill = 50 * 0.50 + (unit - 50) * 0.70;
	} else if (unit > 150 && unit <= 250) {
		bill = 50 * 0.50 + 100 * 0.70 + (unit - 150) * 1.00;
	} else if (unit > 250) {
		bill = 50 * 0.50 + 100 * 0.70 + 100 * 1.00 + (unit - 250) * 1.20;
	}
	
	total_bill = bill + bill * 0.20;
	
	printf("Bill is: %f\n",bill);
	printf("total Bill is: %f",total_bill);
	
	return 0;
}
