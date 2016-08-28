/*

This program expalins how to make Structures as Data Types 

Author	:  Vivek Tiwari
Usege	:  typedef struct struct_name new_type
Version	:  1.0

*/

#include<stdio.h>
#include<string.h>
typedef struct 
{
	int roll;
	char name[30];
}Student,*Student_pointer;

int main()
{
	Student s = {100,"Unix"},s1;
	Student_pointer s_poi=&s1;
	s_poi->roll = 101;
	strcpy(s_poi->name,"Linux");
	printf("\n roll : %d\t name : %s",s.roll,s.name);
	printf("\n roll : %d\t name : %s\n",s_poi->roll,s_poi->name);
	
	 
}

