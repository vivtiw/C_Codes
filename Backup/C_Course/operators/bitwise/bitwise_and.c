/*********BITWISE ANDING**********/

void printBits(int x)
{
	int i,j;
	for(i=7;i>=0;i--)
	{ 
		j=(x>>i) & 0x01;
		printf("%d",j);
	}	
}


#include<stdio.h>
main()
{
	int i,j,k;
	char a=10,b=0,c=1;
	/*******displaying bit by bit form of values *******/
	printf("binform of a=");
	printBits(a);
	printf("\n");
	printf("binform of b=");
	printBits(b);
	printf("\n");
	printf("binform of c=");
	printBits(a);
/**************************************************************/

	k=a&b;
	printf("\nafter ANDING a with b :Binform =");
	printBits(k);
/*BITWISE AND OPERATION B/W "a and c"*/
	k=a&c;
	printf("\nafter ANDING a with c :Binform =");
	printBits(k);
/*BITWISE AND OPERATION B/W "b and c"*/
	k=b&c;
	printf("\nafter ANDING b with c :Binform =");
	printBits(k);
}
