#include<stdio.h>

int main() {
	int salary, bonus, total_salary;
	char gender;
	
	printf("Please enter your gender and salary");
	scanf("%c %d", &gender, &salary);
	
	switch (gender) {
		case 'm':
			if (gender == 'm' && salary < 10000) {
				bonus = salary * 0.02;
			}
			break;
		case 'f':
			if (gender == 'f' && salary < 10000) {
				bonus = salary * 0.03;
			}
			break;
	}
	
	total_salary = salary + bonus;
	
	printf("Your salary is: %d\n", salary);
	printf("Your bonus is: %d\n", bonus);
	printf("Your Total salary is: %d\n", total_salary);
	
	return 0;
}
