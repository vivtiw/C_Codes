/*

This program explains how to define our own data types

Author 	: Vivek Tiwari
Usage	: typedef type new_datatype1,new_datatype2,.....;
Version	: 1.0

*/

#include<stdio.h>
int main()
{
	// Decalring new Datatypes
	typedef char c, *cpointer, string[50];	 
	c A = 'Z';			// Declaring char object
	cpointer poi = &A;		// Declaring pointer to char
	string name = "Veda Solutions";	// Decalaring char array of size 50;
	
	printf("\n A = %c \n poi = %p \n name = %s\n",A,poi,name);
		
}
