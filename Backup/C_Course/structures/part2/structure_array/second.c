/*

This program explains how to declare array of structures & manipulate array of structures

Author 	: Vivek Tiwari
Usage	: struct structure_name object[size];
Version	: 1.0

*/

#include<stdio.h>
#define MAX 5

struct stu
{
	int roll,age;
	char gender,name[20];
	float height;
};

int main()
{
	struct stu s[MAX];
	int i;
	printf("\n Enter 5 student details\n");
	for(i=0;i<MAX;i++)
	{
		printf("\n Enter Student Roll Number : ");
	   	 scanf("%d",&s[i].roll);
		printf("\n Enter Student Name : ");
		 gets(stdin);
		 fgets(s[i].name,20,stdin);
		 s[i].name[strlen(s[i].name)-1]='\0';
		printf("\n Enter Age : ");
		 scanf("%d",&s[i].age);
		 gets(stdin);
		printf("\n Enter Gender : ");
		 scanf("%c",&s[i].gender);
		printf("\n Enter Height : ");
		 scanf("%f",&s[i].height);
	}
	printf("\n Student Details you entered\n");
	printf("\n Roll\tName\t\t\t\tAge\tGender\tHeight\n");
	for(i=0;i<MAX;i++)
	printf("%3d\t%-25s\t%3d\t%1c\t%2.2f\n",s[i].roll,s[i].name,s[i].age,s[i].gender,s[i].height);
	
}
