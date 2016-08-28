/***********toggle a particular  bit*************/

#include<stdio.h>
int power(int ,int);
main()
{

	int pos,i,k,m=65534;
	unsigned short toggle;
	printf("enter the value\n");
	scanf("%d",&toggle);
	printf("enter the bit position which is to be toggled\n");
	scanf("%d",&pos);
	printf("value before toggling:");
	for(i=15;i>=0;i--)
	{
	   k=(toggle>>i)&0x0001;
	   printf("%d",k);
	}
	printf("\n");
	m=m<<pos-1;
	printf("\n %d \n",m);
	for(i=15;i>=0;i--)
	 {
	   printf("%d",(m>>i)&0x0001);  
	 }
	printf("\n");
	k=toggle&m;
	printf("value  after oggling:");
	for(i=15;i>=0;i--)
	 {
	   printf("%d",(k>>i)&0x0001);  
	 }
 

}

