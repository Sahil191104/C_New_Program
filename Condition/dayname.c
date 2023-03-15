#include<stdio.h>

int main() {
	char ch;
	
	printf("Please enter Day Name: ");
	scanf("%c", &ch);
	
	switch (ch) {
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuseday");
			break;
		case 'W':
			printf("Wedesday");
			break;
		case 't':
			printf("Turshday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Seterday");
			break;
		case 's':
			printf("Sunday");
			break;
		default:
			printf("Invalid input");
			break;
	}
	
	return 0;
}
