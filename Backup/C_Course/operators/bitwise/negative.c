#include<stdio.h>

void printBits(int x)
{
	int i,j;
	for(i=15;i>=0;i--)
	{ 
		j=(x>>i) & 0x01;
		printf("%d",j);
	}	
}

main()
{
	short i,j,neg,k;
	printf("enter the negative value\n");
	scanf("%d",&neg);
	printf("\n");
	k=neg;
	printBits(k);
	k=~neg;
	printf("\n");
	k++;
	printBits(k);

}
