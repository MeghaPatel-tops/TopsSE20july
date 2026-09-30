#include<stdio.h>
main(){
	int enroll,i;
	char name[20];
	char email[30];
	
	FILE *fp;
	char ch;
//	fp = fopen("studentlist.csv","w");
//	fprintf(fp,"Enroll,Name,Email\n");
//     for(i=1;i<=3;i++){
//     		printf("\n Enter enroll name email");
//		scanf("%d %s %s",&enroll,name,email);
//		fprintf(fp,"%d,%s,%s\n",enroll,name,email);
//	 }
//	fclose(fp);

    fp= fopen("studentlist.csv","r");
    while((ch=getc(fp))!=EOF){
    	if(ch==','){
    		printf("\t");
    		continue;
		}
    	 printf("%c",ch);
	}
	fclose(fp);

   
}
