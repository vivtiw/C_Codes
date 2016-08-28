/*

This program explains how to pass array to structures as argument to a function

Author 	: Vivek Tiwari
Usage	: struct structure_name object[size];
Version	: 1.0

*/

#include<stdio.h>
#define MAX 2

struct stu
{
	int roll,age;
	char gender,name[20];
	float height;
};

void display(struct stu[]);
int main()
{
	int i;
	struct stu s[MAX] ={{100,27,'M',"Hari Prasad. D",6.01},{101,24,'F',"Jhansi",5.8}} ;
	display(s);
	printf("\n Student Details you entered\n");
	printf("\nRoll\tName\t\t\t\tAge\tGender\tHeight\n");
	for(i=0;i<MAX;i++)
	printf("%3d\t%-25s\t%3d\t%1c\t%2.2f\n",s[i].roll,s[i].name,s[i].age,s[i].gender,s[i].height);
}
void display(struct stu s[])
{
	s[0].roll=200;
	s[1].roll=201;
	
}
