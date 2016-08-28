/*

This program explains about formatted input function scanf

Author	:  Vivek Tiwari
Usage	:  scanf("char *formated",&arg,.....);
Version	:  1.0

*/

#include<stdio.h>

int main()
{
	int a,b;
/*	float c;
	printf("\n Enter any Two numbers : ");
	 scanf("%d %d",&a,&b); 	// Reads second value, but it is not assigned to b
					// '*' will read but ignore
	printf("\n a = %d\t b = %d\n",a,b);
	
	printf("\n Enter any Two digit number :");
	 scanf("%2d",&a);		// Stores only two digit number into a
	printf("\n a = %d",a);*/

	printf("\n Enter any two Two digits number :");
	scanf("%2d%2d",&a,&b);		// Stores only two digits to corresponding variable and if any data remaining will
					// be stored in next consecutive variable  
	printf("\n a = %d\t b = %d",a,b);
/*	
	printf("\n Enter any floting point number :");
	 scanf("%2.3lf",&c);		// Should not specify width from floting points
	printf("\n c = %f",c);
*/
}
