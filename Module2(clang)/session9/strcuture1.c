#include<stdio.h>
struct Product{
	int pid;
	char pname[20];
	float price;
};
main(){
	struct Product p1;
	printf("\n Enter pid productname price");
	scanf("%d %s %f",&p1.pid,p1.pname,&p1.price);
	
	printf("\n pid=%d",p1.pid);
	printf("\t pname=%s",p1.pname);
	printf("\t price=%f",p1.price);
}
