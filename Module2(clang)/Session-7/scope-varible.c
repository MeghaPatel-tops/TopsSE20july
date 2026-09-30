#include<stdio.h>
int y=100;
void test(){
	printf("\n y=%d",y);
}
void add(int x,int y){
	printf("\n addition of %d and %d=%d",x,y,x+y);
}
main(){
	{
		int x=10;//local varible
		printf("\n y=%d",y);
		
	}
	//printf("\n x=%d",x);===>genrate error undeclare varible
	test();
	add(120,50);

}
