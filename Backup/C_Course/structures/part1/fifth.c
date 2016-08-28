/*

This program displays true size of a Structure using __attriute(packed)__ 

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
	char x;
	int roll;
	char /*name[40],*/gender __attribute__((__aligned__(2)));
	float height;
}__attribute__((packed));	// specifies how the compiler should align data items

int main()
{
	struct A first;		//declaring Structure
	printf("\n Size of Struct A %3d\n",sizeof(first));
} 
