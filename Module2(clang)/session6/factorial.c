#include<stdio.h>
int factFind(int num){
	if(num==1){
		return 1;
	}
	int f= num * factFind(num-1);
	return f;
}
main(){
	char sname[20];
	int   t;
	float min;
	printf("\n factorial=%d",factFind(5));
	printf("\n Enter sname t duration");
	scanf("%s %d %f",sname,&t,&min);
	printf("\n songname=%s total=%d min=%f",sname,t,min);
	
	
}
