#include<stdio.h>
void addition(int a, int b);//declartion
float areaOfCircle(int r);
main(){
   	addition(12,34);//calling
   	addition(100,200);
   	float ans=areaOfCircle(2);
   	printf("\n area of circle=%f",ans);
   	printf("\n square =%d",squareFind(5));
}
//definition
void addition(int a, int b){
	printf("\n addition of %d and %d=%d",a,b,a+b);
}

float areaOfCircle(int r){
	float a= 3.14*r*r;
	return a;
}

int squareFind(int num){
	return num*num;
}
