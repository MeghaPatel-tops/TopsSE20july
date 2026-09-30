#include<stdio.h>
main(){
	int enroll;
	char name[20];
	char email[30];
	
	FILE *fp;
	fp = fopen("student.txt","w");
	printf("\n Enter enroll name email");
	scanf("%d %s %s",&enroll,name,email);
	fprintf(fp,"%d %s %s",enroll,name,email);
	fclose(fp);

   fp=fopen("student.txt","r");
   fscanf(fp,"%d %s %s",&enroll,name,email);
   printf("\n enroll=%d name=%s email=%s",enroll,name,email);
   fclose(fp);
}
