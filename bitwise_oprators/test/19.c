#include<stdio.h>
main()
	{
		int j;
		unsigned int i=15;
		j=0;
		while(j<32)
			printf("%d",(i<<j++&0x8000)?1:0);
	}

