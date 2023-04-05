#include<stdio.h>
#include<string.h>

int main() {
	int i, j;
	char str[100];
	
	printf("Please enter any number;0");
	gets(str);
	
	i = 0;
	
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			for (j=i; str[j] != '\0'; j++) {
				str[j] = str[j+1];
			}
		}
		
		i++;
	}
	
	puts(str);
	
	return 0;
}
