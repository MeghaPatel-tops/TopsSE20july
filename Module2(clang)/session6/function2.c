#include<stdio.h>
void addition(int a, int b);//declartion
void printHello();
int squareFind(int num);
float areaOfCircle();
main(){
   	addition(12,34);//calling
   	 printf("\n square =%d",squareFind(5));
   	printHello();
   	printf("\n area of circle=%f",areaOfCircle());
}
//definition
//without returntype with parameter
void addition(int a, int b){
	printf("\n addition of %d and %d=%d",a,b,a+b);
}
//without returntype without parameter
void printHello(){
	printf("\n HEllo world");
}
//with returntype with parameter
int squareFind(int num){
	return num*num;
}
//with returntype without parameter
float areaOfCircle(){
	int r;
	printf("\n enter the radius");
	scanf("%d",&r);
	float a= 3.14*r*r;
	return a;
}
