#include<stdio.h>

int main(){
	float basic_salary=100,hra,da,ta,gross_salary;
	
	hra=(basic_salary * 10)/100;
	da=(basic_salary * 5)/100;
	ta=(basic_salary * 8)/100;
	
	gross_salary = basic_salary + hra + da + ta;
	
	printf("Ans is Gross Salary :- %f", gross_salary);
	
	return 0;
}
