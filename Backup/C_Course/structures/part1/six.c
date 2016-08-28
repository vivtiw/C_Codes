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
	int roll;
	char name[40],gender __attribute__((aligned (2)));
      //This attribute specifies a minimum alignment (in bytes) for variables of the specified type
	float height;
}__attribute__((packed));	// specifies how the compiler should align data items

int main()
{
	struct A first;		//declaring Structure
	printf("\n Size of Struct A %3d\n",sizeof(first));
} 
