/*

This program expains about null pointers.
A null pointer is a value that any pointer may take to represent that it is pointing to "nowhere"
Authoer	:  Vivek Tiwari
Usage	:  datatype *variable;
Version	:  1.0

*/

#include<stdio.h>
int main()
{
	int *i=NULL,b;				/* i is declaring to be a pointer to integer*/
	float *f;
	char *c;

	//i = NULL;	/*		// i is pointing nowhere*/
	f = NULL;	/*		// f is pointing nowhere*/
	c = NULL;	/*		// c is pointing nowhere*/
	b=*i;
	printf("%d %f %c",*i,*f,*c);
}
