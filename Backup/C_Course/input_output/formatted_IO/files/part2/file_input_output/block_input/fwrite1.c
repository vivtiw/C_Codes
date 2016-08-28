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
	student s[4];
	FILE *fp;
	int i=0;
	fp = fopen("Student.dat","w");
	printf("\n Enter Student Details\n");
	while(i<4)
	{
		printf("\n Enter Student Roll Number : ");
		 scanf("%d",&s[i].roll);
		printf("\n Enter Student Name : ");
		 scanf(" %[^\n]",s[i].name);
		printf("\n Enter Student Age : ");
		 scanf("%d",&s[i].age);
		printf("\n Enter Student Gender : ");
		 scanf(" %c",&s[i].gender);
		i++;
	}
		fwrite(&s,sizeof(s[0]),4,fp);
	fclose(fp);
}
