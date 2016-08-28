/*

This program explains about nesting of structures
Structures can contain other structures as members; in other words, structures can nest.  

Author	: Vivek Tiwari
Usage	: struct structure_name
	  {
		fields....;
	  }variable;
Version	: 1.0

*/

#include<stdio.h>
#include<string.h>

struct stu_marks
{
	int mat,phy,che,tot;
	float avg;
};

struct student		// Structure Definition
{
	int roll;
	char name[40],gender;
	float height;
	struct stu_marks m;
}; 

int main()
{
	struct student first;		//declaring Structure
	struct student second = {102,"Hari Prasad. D",'M',5.11,{78,89,77}};//decalring & initialising Structure 								    Variables 
	first.roll=101;			//Accessing members of a structure using '.' operator
	strcpy(first.name,"Phaneendra Kumar. P");
	first.gender='M';
	first.height=5.6;
	first.m.mat=65;
	first.m.phy=55;
	first.m.che=63;
	
	first.m.tot= first.m.mat+first.m.phy+first.m.che;
	first.m.avg= (float)first.m.tot/3;
	
	second.m.tot= second.m.mat+second.m.phy+second.m.che;
	second.m.avg= (float)second.m.tot/3;

	printf("\n Roll\tName\t\t\t\tGender\tHeight\tMat\tPhy\tChe\tTot\tAvg");
printf("\n------------------------------------------------------------------------------------\n");
	printf("\n %3d\t%-25s\t%c\t%1.2f\t%3d\t%3d\t%3d\t%3d\t%3.2f\n",first.roll,first.name,first.gender,first.height,first.m.mat,first.m.phy,first.m.che,first.m.tot,first.m.avg);
 
	printf("\n %3d\t%-25s\t%c\t%1.2f\t%3d\t%3d\t%3d\t%3d\t%3.2f\n",second.roll,second.name,second.gender,second.height,second.m.mat,second.m.phy,second.m.che,second.m.tot,second.m.avg);
}
