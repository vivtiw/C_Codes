/*

This program explains about Block file output function,	fwrite() which writes binary data  

Author	: Vivek Tiwari
Usage	: fwrite(void *,int size,int count,File *fp);
Version : 1.0

*/

#include<stdio.h>
#include<string.h>
typedef struct
{
	int roll,age;
	char name[30],gender;	
}student;

int main()
{
	char ch;
	student s;
	FILE *fp;
	fp = fopen("Student.dat","w");
	printf("\n Enter Student Details\n");
	while(1)
	{
		printf("\n Enter Student Roll Number : ");
		 scanf("%d",&s.roll);
		printf("\n Enter Student Name : ");
		 scanf(" %[^\n]",s.name);
		printf("\n Enter Student Age : ");
		 scanf("%d",&s.age);
		printf("\n Enter Student Gender : ");
		 scanf(" %c",&s.gender);
		printf("\n Continue.......(Y/N) : ");
		scanf(" %c",&ch);
		fwrite(&s,sizeof(s),1,fp);
		if(ch=='n' ||ch=='N')
			break;
	}
	fclose(fp);
}
