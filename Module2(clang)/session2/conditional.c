#include<stdio.h>
main(){
	int  num ;
	printf("\n Enter number");
	scanf("%d",&num);
	
	//()?true:false
	(num > 0)?printf("\n positive"):printf("\n negative");
	
	(num %2 == 0)?printf("\n even"):printf("\n odd");
}
