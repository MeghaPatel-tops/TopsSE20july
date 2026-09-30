#include<stdio.h>
main(){
	FILE *fp;
	char ch;
	fp=fopen("hello.txt","w");
	fputc('x',fp);
	fclose(fp);
	
	fp=fopen("hello.txt","r");
    ch=fgetc(fp);
	printf("\n reading data from file=%c",ch);
	fclose(fp);
	
}
