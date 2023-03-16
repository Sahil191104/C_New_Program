#include<stdio.h>

int main() {
	int purchase_amount, tax_amuont, total_amuont;
	char items;
	
	printf("Please enter any Items And purchase_amount");
	scanf("%c %d", &items, &purchase_amount);
	
	switch (items) {
		case 'M':
			if (purchase_amount >= 0 && purchase_amount <= 100) {
				tax_amuont = purchase_amount * 0;
			} else if (purchase_amount >= 101 && purchase_amount <= 200) {
				tax_amuont = purchase_amount * 0.05;
			} else if (purchase_amount >= 201 && purchase_amount <= 300) {
				tax_amuont = purchase_amount * 0.075;
			} else if (purchase_amount > 300) {
				tax_amuont = purchase_amount * 0.1;
			}
		case 'H':
			if (purchase_amount >= 0 && purchase_amount <= 100) {
				tax_amuont = purchase_amount * 0.05;
			} else if (purchase_amount >= 101 && purchase_amount <= 200) {
				tax_amuont = purchase_amount * 0.075;
			} else if (purchase_amount >= 201 && purchase_amount <= 300) {
				tax_amuont = purchase_amount * 0.1;
			} else if (purchase_amount > 300) {
				tax_amuont = purchase_amount * 0.15;
			}
	}
	
	total_amuont = purchase_amount - tax_amuont;
	
	printf("Purchase Amount is:-%d\n",purchase_amount);
	printf("Tax Amount is:-%d\n",tax_amuont);
	printf("Total Amount is:-%d\n",total_amuont);

	return 0;
}
