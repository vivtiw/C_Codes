/*********BITWISE XORING**********/

#include<stdio.h>

void printBits(int x)
{
	int i,j;
	for(i=7;i>=0;i--)
	{ 
		j=(x>>i) & 0x01;
		printf("%d",j);
	}	
}

main()
{
	int k;
	char a=13,b=1;
	/******displaying bit by bit form of values******/
	printf("binform of a=");
	printBits(a);
	printf("\n");
	printf("binform of b=");
	printBits(b);
	printf("\n");

/**************************************************************/
/*BITWISE  XOR OPERATION B/W "a and b"*/
	k=a^b;
	printf("\nafter XORING a with b :Binform =");
	printBits(k);

}
