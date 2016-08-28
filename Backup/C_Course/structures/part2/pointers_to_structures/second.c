/*

This program explains how to pass pointer to structure as argument fo a function.  

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

void find(struct student *);
void display(struct student *);

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
	find(&first);
	find(&second);
	printf("\n Roll\tName\t\t\t\tGender\tHeight\tMat\tPhy\tChe\tTot\tAvg");
printf("\n------------------------------------------------------------------------------------\n");
	display(&first);
	display(&second);
	printf("\n")	;
}

void find(struct student *p)	
{
	p->m.tot= p->m.mat+p->m.phy+p->m.che;
	p->m.avg= (float)p->m.tot/3;	
}

void display(struct student *p)
{
	printf("\n %3d\t%-25s\t%c\t%1.2f\t%3d\t%3d\t%3d\t%3d\t%3.2f\n",p->roll,p->name,p->gender,p->height,p->m.mat,p->m.phy,p->m.che,p->m.tot,p->m.avg);
}
