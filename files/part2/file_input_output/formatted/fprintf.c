/*

This program explains about formatted file output functions

Author	: Vivek Tiwari
Usage	: fprintf(File *fp,"formatted string",..... );
Version : 1.0

*/

#include<stdio.h>
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
		fprintf(fp,"\n%4d\t%-25s\t%4d\t%1c",s.roll,s.name,s.age,s.gender);
		if(ch=='n' ||ch=='N')
			break;
	}
	fclose(fp);
}
