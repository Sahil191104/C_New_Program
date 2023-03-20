#include <stdio.h>
 
int main(){
 	int n, sum = 0, i, enter;
 
 	printf("Please enter Number:\n");
  	scanf("%d", &n);
 
 	printf("Sum Number Enter:\n", n);
  	for (i=1; i<=n; i++) {
    	scanf("%d", &enter);
    	sum = sum + enter;
  	}

  	printf("Sum Ans is: %d", sum);
	
  	return 0;
}
