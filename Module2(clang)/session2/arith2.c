#include<stdio.h>
main(){
	int a=12,b=3,m=10,n;
	int c=a%b;
	printf("\n rem=%d",c);
	//n=m++;//post increment=>first assign value to n then increse in m
	n=++m;//pre inrement first increce in m then assign to n
	printf("\n n=%d m=%d",n,m);
}
