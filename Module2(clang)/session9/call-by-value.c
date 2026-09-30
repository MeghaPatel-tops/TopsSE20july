#include<stdio.h>
void swap(int a, int b){
	int tmp=a;
	a=b;
	b=tmp;
	printf("\n in function a=%d and b=%d",a,b);
}
main(){
	int a=10,b=20;
	swap(a,b);//call by value
	printf("\n a=%d and b=%d",a,b);
}
