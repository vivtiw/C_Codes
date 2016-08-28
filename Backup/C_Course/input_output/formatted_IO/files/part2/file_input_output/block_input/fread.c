/*

This program explains about Block file input function,	fread() which reads binary data  

Author	: Vivek Tiwari
Usage	: fread(void *,int size,int count,File *fp);
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
	fp = fopen("Student.dat","r");
	printf("\n Student Details\n");
	while(fread(&s,sizeof(s),1,fp)!=0)
		printf("\n%5d  %-20s  %4d  %1c\n",s.roll,s.name,s.age,s.gender);
	fclose(fp);
}
