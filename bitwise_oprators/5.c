#include<stdio.h>

void countones(unsigned int i)
{
 static int count=0;
	if(i>0)
	{
	 count+= i&0x1u;
	 i= i>>1;
	 countones(i);
	}
	printf("\n %d",count);
}

main()
{
	unsigned int i=0x23;
	countones(i);
	return 0;
}
	
