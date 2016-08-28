/*

This program explains how to define a union inside a structure 

Author	: Vivek Tiwari
Usage	: union union_name{members list};
Version	: 1.0

*/

#include<stdio.h>

enum {INT = 1,CHRAARR};

typedef struct
{
	int Ecode;
	char Ename[20];
	short utype;
	union
	{
		int Dcode;
		char Dname[20];
	}dept;
	float salary;
}Employee;

int main()
{
	Employee e1 = {100,"Hari Prasad. D",1,{200},20000},
		 e2 = {101,"Mohan Krishna .B",2};//,{"Salse"},10000};
		 strcpy(e2.dept.Dname,"Sales");
		 e2.salary=10000;
	
	printf("\n %d\t%-20s\t%d\t%.2f\n",e1.Ecode,e1.Ename,e1.dept.Dcode,e1.salary);
	printf("\n %d\t%-20s\t%s\t%.2f\n",e2.Ecode,e2.Ename,e2.dept.Dname,e2.salary);
}
