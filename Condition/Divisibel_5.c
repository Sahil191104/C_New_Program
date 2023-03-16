#include<stdio.h>

int main() {
  	int i,n;
  	
  	printf("Please enter any number: ");
  	scanf("%d", &n);
  	
  	printf("Numbers divisible by 5 are:");
  	for(i=1;i<=n;i++){
  		if(i % 5 == 0){
      		printf("\n%d",i);
    	}
  	}
  	
 	 return 0;
}
