/*

This program explains about Block file input function,	fread() which reads binary data  

Author	: Vivek Tiwari
Usage	: fread(void *,int size,int count,File *fp);
Version : 1.0

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	int roll,age;
	char name[30],gender;	
}student;

int main()
{
	student *s;
	FILE *fp;
	int i;
	s = (student *)malloc(sizeof(student)*4);
	fp = fopen("Student.dat","r");
	printf("\n Student Details\n");
	fread(s,sizeof(student),4,fp);
	for(i=0;i<4;i++,s++)
		printf("\n%5d  %-20s  %4d  %1c\n",s->roll,s->name,s->age,s->gender);
	fclose(fp);
	printf("\n");
}
