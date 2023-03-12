#include<stdio.h>

int main() {
	char gender;
	int salary, bonus, total_salary;
	
	printf("Please enter gender and salary: ");
	scanf("%c %d", &gender, &salary);
	
	if (gender == 'm' || gender == 'M' && salary > 10000) {
		bonus = salary * 0.02;
	} else if (gender == 'f' || gender == 'F' && salary > 10000) {
		bonus = salary * 0.03;
	}
	
	total_salary = salary + bonus;
	
	printf("Salary is: %d", salary);
	printf("bonus is: %d", bonus);
	printf("Total Salary is: %d", total_salary);
	
	return 0;
}
