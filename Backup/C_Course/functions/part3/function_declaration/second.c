/*

This example shows how to pass any type of objects as arguments to a functions  

Author	:  Vivek Tiwari
Usage	:
	   return_type function_name(formal list)
	   {
		function body;
		return exp;	
	   }
	   formal list are argument list of any type 	
	   Default return type of a function is int
	   return statement can be use to return any value we desired explicitly 
	   exp : any c valied expression	 	
Version	: 1.0

*/
#include<stdio.h>

//return type function_name(formal argument list);
//float squre_area(float);
//float rect_area(float,float);

int main()
{
	float len,bre,result;
	printf("\n Enter Side of a squre : ");
	 scanf("%f",&len);
	result = squre_area(len);
	printf("\n Area of Squ : %3.2f\n",result);
	printf("\n Enter Length & Breath of a Rectangle : ");
	 scanf("%f%f",&len,&bre);
	result = rect_area(len,bre);
	printf("\n Area of Rect : %3.2f\n",result);
  
	
}

float squre_area(float side)  //  x,y are formal arguments	
{
	return side*side;
}
float rect_area(float len,float bre)  //  x,y are formal arguments	
{
	return len*bre;
}
