/***********toggle a particular  bit*************/

#include<stdio.h>
int power(int ,int);
main()
{

	int pos,i,k;
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
	k=toggle^power(2,pos);
	printf("value  after oggling:");
	for(i=15;i>=0;i--)
	 {
	   printf("%d",(k>>i)&0x0001);  
	 }
 

}
int power(int x,int y)
{
	int z=1;
	if(y!=0)
		return(z=x*power(x,y-1));
	else 
		return(z);

}

