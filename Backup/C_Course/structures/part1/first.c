/*

This program explains how to define ,declare, Initialize & Accessing Members of a Structure 

Author	: Vivek Tiwari
Usage	: struct structure_name
	  {
		fields....;
	  }variable;
Version	: 1.0

*/

#include<stdio.h>
#include<string.h>
struct student_details 		// Structure Definition
{
	int roll;
	char name[40],gender;
	float height;
};			// declaring structure 

int main()
{
	typedef struct student_details first;
	first  second;		//declaring Structure
	first  third = {103,"Hari Prasad. D",'M',5.11};//decalring & initialising Structure 								    Variables 
	printf("\n Roll\tName\t\t\t\t\t\tGender\tHeight\n");
	second=third;
	printf("\n %3d\t%-40s\t%c\t%1.2f\n",third.roll,third.name,third.gender,third.height);
	printf("\n %3d\t%-40s\t%c\t%1.2f",second.roll,second.name,second.gender,second.height);
} 
