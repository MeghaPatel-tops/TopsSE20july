#include<stdio.h>
/*
switch(choice){
   case 1:
      //block
   break;
   case 2:
      //block
	break;
	default:	     
}
*/

main(){
	int a,b;
	char ch;
	printf("\n Enter + for add");
	printf("\n Enter - for sub");
	printf("\n Enter * for mul");
	printf("\n Enter / for div");
	printf("\n Enter your choice");
	scanf("%c",&ch);
	printf("\n Enter the value of a and b");
	scanf("%d %d",&a,&b);
	
	
	switch(ch){
		case '+':
			printf("\n addition=%d",a+b);
		break;	
		case '-':
			printf("\n sub=%d",a-b);
		break;	
		case '*':
			printf("\n mul=%d",a*b);
		break;	
		case '/':
			printf("\n div=%d",a/b);
		break;	
		default:
			printf("\n Wrong choice");
		break;	
	}
}
