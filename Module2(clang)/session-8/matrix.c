#include<stdio.h>
main(){
	int a[2][2]={1,2,3,5};
	
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\ta[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
