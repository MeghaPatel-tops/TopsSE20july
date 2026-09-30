#include<stdio.h>
main(){
	int a,b,c;
	float div;
	printf("\n Enter the value of a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n addition of %d and %d=%d",a,b,c);
	c=a-b;
	printf("\n sub of %d and %d=%d",a,b,c);
	c=a*b;
	printf("\n mul of %d and %d=%d",a,b,c);
	div=a/b;
	printf("\n div of %d and %d=%f",a,b,div);
}
