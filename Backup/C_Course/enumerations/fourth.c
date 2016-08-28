/*

This program explains how to declare enumerated type with expicit value;

Author 	: Vivek Tiwari
Usage	: enum tag-name {enumeration-list} variable-list;
Version	: 1.0

*/

#include<stdio.h>

int main()
{
	int day;
	enum days {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday } first_day;
	// days is a tag name, inside '{' and '}' is the actual enumeration-list, first_day is a              variable of type "enum days" 

	enum days next_day;	// Variables can also be declared like this
	printf("\n Enter day Number : ");
 	 scanf("%d",&day);
	switch(day)
	{
		case Sunday:
			printf("\n Sunday\n");
			break;
		case Monday:
			printf("\n Monday\n");
			break;
		case Tuesday:
			printf("\n Tuesday\n");
			break;
		case Wednesday:
			printf("\n Wednesday\n");
			break;
		case Thursday:
			printf("\n Thursday\n");
			break;
		case Friday:
			printf("\n Friday\n");
			break;
		case Saturday:
			printf("\n Saturday\n");
			break;
			
	}
	
}
