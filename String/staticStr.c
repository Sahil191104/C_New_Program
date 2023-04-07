//#include<stdio.h>
//
//int main(){
//	
//	int i;
//	char str[5]={'S','U','R','A','T'};
//	
//	puts(str);
//	
//	i=0;
//	
//	while(str[i] != '\0'){
//		printf("%c - ", str[i]);
//		
//		i++;
//	}
//	
//	return 0;
//}

#include <stdio.h>

int main() {
	char str[5]={'S','U','R','A','T'};

    int i, len = strlen(str);

    for (i = 0; i < len - 1; i++) {
        printf("%c - ", str[i]);
    }

    printf("%c\n", str[len - 1]);

    return 0;
}

