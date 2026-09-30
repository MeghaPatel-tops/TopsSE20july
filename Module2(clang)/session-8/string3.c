#include<stdio.h>
main(){
	char name[20];
	int i=0;
	printf("\n Enter your name");
	scanf("%s",name);
	
	printf("\n name=%s",name);
	
	while(name[i] != '\0'){//megha
		i++;
	}
	printf("\n length of name=%d",i);
}
