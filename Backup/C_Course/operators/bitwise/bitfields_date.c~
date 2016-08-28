/*********storing date in single variable using bitwise operators*******/
/******month:4bits(from 21th-24th) ,date:5 bits(16nth-20th),year: first 16bits(0-15nth) bits********/  

void print(unsigned int);
#include<stdio.h>
main()
{


	int i,j;
	unsigned int dmy=0;
	unsigned int data;
	/********storing mm dd yy***********/
	data=0x0;
	printf("enter the  month\n");
	scanf("%d",&data);
	dmy=dmy|(data<<20);
	data=0x0;
	printf("enter the  date\n");
	scanf("%d",&data);	
	dmy=dmy|(data<<16);
	data=0x0;
	printf("enter the  year\n");
	scanf("%d",&data);
	dmy=dmy|(data);
	for(i=31;i>=0;i--)
	{
		j=(dmy>>i)&0x00000001;
		printf("%d",j);
	}
	print(dmy);
}

void print(unsigned int dmy)
{
	unsigned int date;
	/***********reading mm dd yy**********/
	date=(dmy>>20)&0x0000003f;
	printf(" %d:",date);
	date=(dmy>>16)&0x0000001f;
	printf("%d:",date);
	date=dmy&0x000ffff;
	printf(" %d:",date);
}
