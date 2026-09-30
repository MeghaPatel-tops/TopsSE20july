//M:65 p:55  c:50   m+p+c=190   m+p=145
#include<stdio.h>
main(){
	int m,p,c,total,sbtotal;
	printf("\n Enter Marks of Maths Physics Chemistry");
	scanf("%d %d %d",&m,&p,&c);
	
	if(m >= 65 && p >= 55 && c >=50){
		total = m+p+c;
		sbtotal=m+p;
		if(total >= 190 || sbtotal>=145){
			printf("\n Eligible for Admision");
		}
		else{
			printf("\n Not inside eligible");
		}
	}
	else{
		printf("\n Not eligible");
	}
}
