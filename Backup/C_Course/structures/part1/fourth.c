/*

This program displays size of a Structure in which members are padded

Author	: Vivek Tiwari
Usage	: struct structure_name
	  {
		fields....;
	  }variable;
Version	: 1.0

*/

#include<stdio.h>
#include<string.h>
struct A		// Structure Definition
{
	int roll;
	char name[41];
	float height;
}/*__attribute__((packed))*/;
			// declaring structure 

int main()
{
	struct A first;		//declaring Structure
	unsigned int x;
	printf("\n Size of Struct A %3d\n",sizeof(first));
	printf("\n Address Struct A 0 %u\n",&first.roll);
	printf("\n Address Struct A 0 %u\n",&first.name);
	//printf("\n Address Struct A 0 %u\n",&first.gender);
	printf("\n Address Struct A 0 %u\n",&first.height);
	x=(int) &first.height;
	printf("\n Align %d",x%1);
//	x=(int) (&first+1);

//	printf("\n Address Struct A 1 %x\n",&first[1]);
//	printf("\n Align %d",x%52);
	
} 
