#include<stdio.h>
main()
{	
	unsigned int n=0xFF;
   	int count = 0;
   	while (n) 
	{
      		count += n & 0x1u;
      		n >>= 1;
   	}
   printf("\n %d", count);
}

