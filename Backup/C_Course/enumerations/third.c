/*

This program explains how to declare enumerated type and assign expicit values to enumaration list.

Author 	: Vivek Tiwari
Usage	: enum tag-name {enumeration-list} variable-list;
Version	: 1.0

*/

#include<stdio.h>

int main()
{
	int a,b,cho;
	enum {M800 = 17, Zen = 20, Waganor= 15, Swift = 16, Alto = 18 };
	// Declaring enumeration-list, without tag name

	printf("\n Maruthi Models\n");
	printf("1. 800\n");
	printf("2. Zen\n");
	printf("3. Wagonor\n");
	printf("4. Swift\n");
	printf("5. Alto\n");
	printf("\n Enter Your Choice : ");
	 scanf("%d",&cho);
	
	switch(cho)
	{
		case 1:
			printf("\n Milage is : %d\n",M800);
			break;
		case 2:
			printf("\n Milage is : %d\n",Zen);
			break;
		case 3:
			printf("\n Milage is : %d\n",Waganor);
			break;
		case 4:
			printf("\n Milage is : %d\n",Swift);
			break;
		case 5:
			printf("\n Milage is : %d\n",Alto);
			break;
		default:
			printf("\n Invalied Choice\n");	
	}
	
}
