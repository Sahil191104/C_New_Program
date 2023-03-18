#include<stdio.h>

int main() {
	char cast, grade;
	int fees, scholarship, totale_fees;
	float cgpa;

	printf("Enter your cast, CGPA and Fees: ");
	scanf("%c %f %d", &cast, &cgpa, &fees);

	if (cgpa > 9 && cgpa <= 10) {
		grade = 'A';
	} else if (cgpa > 8.5 && cgpa <= 9) {
		grade = 'B';
	} else if (cgpa > 8 && cgpa <= 8.5) {
		grade = 'C';
	} else if (cgpa > 7.5 && cgpa <= 8) {
		grade = 'D';
	}

	if (cast == 'O') {
		printf("No Sorry Scholarship: %c", cast);
	} else if (cast == 'B' && grade >= 'B') {
		scholarship = fees * 0.25;
	} else if (cast == 'S' && grade >= 'B') {
		scholarship = fees * 0.50;
	} else if (cast == 'T' && grade >= 'B') {
		scholarship = fees * 1;
	}

	totale_fees = fees - scholarship;
	
	printf("Your Fees is:- %d\n", fees);
	printf("Your CGPA is:- %f\n", cgpa);
	printf("Your scholarship is:- %d\n", scholarship);
	printf("Your Totale fees is:- %d\n", totale_fees);

	return 0;
}
