/*

This program explains about Line Oriented file output functions

Author	: Vivek Tiwari
Usage	: fputs(char *,File *fp);
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
	char ch,data[80];
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
		snprintf(data,80,"\n%4d|%-s|%4d|%1c",s.roll,s.name,s.age,s.gender);
		fputs(data,fp);
		if(ch=='n' ||ch=='N')
			break;
	}
	fclose(fp);
}
