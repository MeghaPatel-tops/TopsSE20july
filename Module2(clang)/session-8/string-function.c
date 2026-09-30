#include<stdio.h>
#include<string.h>
main(){
	char name[20],uname[20],sname[20];
	int i;
	printf("\n Enter your name");
	scanf("%s",name);
	printf("\n Enter your surname");
	scanf("%s",sname);
	i=strlen(name);
	printf("\n length of name=%d",i);
	strcpy(uname,sname);
	printf("\n username=%s",uname);
	
	printf("\n strcmp=%d",strcmp("abc","abc"));
	
	strcat(name,sname);
	printf("\n name=%s",strupr(name));
}
