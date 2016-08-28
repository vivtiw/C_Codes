/*

This program expains what value can be assigned to static variables.

Author	:  Vivek Tiwari
Usage	:  auto datatype variable;
Version	:  1.0

*/

#include<stdio.h>
void disp(float);

int main()
{
	float a = 10.75;
	disp(a);
}
void disp(static float x )		// ERROR : cannot assign local variables 
{
	printf("\n x = %d \n",x);
}
