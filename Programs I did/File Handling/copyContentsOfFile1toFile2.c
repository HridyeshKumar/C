/at first we have to create file1.txt in the same directory and write something in that file1.txt so that it will be copied to the other file/
/* here file1.txt is a already created and defined file*/
#include<stdio.h>
int main()
{
	FILE *filepointer1,*filepointer2;
	char a;
	filepointer1=fopen("file1.txt","r"); 
	filepointer2=fopen("file2.txt","w");
	
	do
	{
		a=fgetc(filepointer1);
		fputc(a,filepointer2);
	}
	while(a!=EOF);
	
	if (filepointer2) 
	{
		while (fscanf(file2, "%s", a)!=EOF)
		printf("%s",a);
		fclose(filepointer1);
		fclose(filepointer2);
	}
	printf("file contents are successfully copied");
	return(0);
}
