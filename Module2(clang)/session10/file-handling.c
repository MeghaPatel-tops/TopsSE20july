#include<stdio.h>
main(){
	FILE *fp;
	char data[100];
	fp=fopen("hello.txt","w");
	fprintf(fp,"Megha");
	fclose(fp);
	
	fp=fopen("hello.txt","r");
	fscanf(fp,"%s",data);
	printf("\n reading data from file=%s",data);
	fclose(fp);
	
}
