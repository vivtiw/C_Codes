/*

This program explains about formatted file input functions

Author	: Vivek Tiwari
Usage	: fscanf(File *fp,"formatted string",..... );
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
	student s;
	FILE *fp;
	fp = fopen("Student.dat","r");
	printf("\n Student Details\n");
while((fscanf(fp,"%d %[^\t] %d %c",&s.roll,s.name,&s.age,&s.gender))!=EOF)
	{
		printf("\n%5d  %-20s  %4d  %1c",s.roll,s.name,s.age,s.gender);
	}
	printf("\n");
	fclose(fp);
}
