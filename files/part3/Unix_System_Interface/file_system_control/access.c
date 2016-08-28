#include<stdio.h>
#include<unistd.h>
int main()
{
	char name[30];
	printf("\n enter file name : ");
	 scanf("%s",name);

	if(access(name,F_OK)<0)
		printf("\n File Does Not Exist\n");
	else
	{ 
		printf("\n File Exist\n");
	
		if(access(name,R_OK)<0)
			printf("\n File is Not Readonly\n");
		else 
			printf("\n File is Readonly\n");
		
		if(access(name,W_OK)<0)
			printf("\n File is Not Writeonly\n");
		else 
			printf("\n File is Writeonly\n");
	
		if(access(name,X_OK)<0)
			printf("\n File is not Executable\n");
		else 
			printf("\n File is Executable\n");
	}
}
