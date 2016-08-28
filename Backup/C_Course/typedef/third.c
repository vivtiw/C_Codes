/*

This program explains how to define our own data types

Author 	: Vivek Tiwari
Usage	: typedef type new_datatype;
Version	: 1.0

*/

#include<stdio.h>
int main()
{
	// Decalring new Datatypes
	typedef int Integer;	 
	typedef float array[5];	
	
	Integer a=-10,b=10,i;	// Decalaring objects with new type;
	unsigned Integer un;	// not Valied cannot use specifiers or modifiers
	//unsigned int un;
	array f;		// array of 5 floats
	printf("\n %d\t%d\n",a,b);
	for(i=0;i<5;i++)
		f[i]=i+10.5;
	for(i=0;i<5;i++)
		printf("%.2f\t",f[i]);
		
}
