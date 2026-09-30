#include<stdio.h>
main(){
	int a=10;
	int *ptr;
	ptr=&a;
	
	printf("\n value of ptr=%d ptr=%p",*ptr,ptr);
	*ptr=30;
	printf("\n a=%d",a);
}
