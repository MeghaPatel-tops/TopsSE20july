#include<stdio.h>
main(){
	FILE *fp;
	char data[20];
	fp=fopen("hello.txt","w");
	fputs("hello world",fp);
	fclose(fp);
	
	fp=fopen("hello.txt","r");
    fgets(data,20,fp);
	printf("\n reading data from file=%s",data);
	fclose(fp);
	
}
