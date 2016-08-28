#include<stdio.h>
//#define CONVERT(num) ((num&0x000000FF<<24)|(num&0x0000FF00<<16)|(num&0x00FF0000<<8)|(num&0xFF000000<<0))
main()
{
	unsigned int num=0xAABBCCDD;
//	CONVERT(n);
	int byte0, byte1, byte2, byte3; 

	byte0 = (num & 0x000000FF) >> 0 ;
	byte1 = (num & 0x0000FF00) >> 8 ;
	byte2 = (num & 0x00FF0000) >> 16 ;
	byte3 = (num & 0xFF000000) >> 24 ;

num=((((num&0x000000FF)>>0)<< 24)|(((num&0x0000FF00)>>8)<< 16)|(((num&0x00FF0000)>>16)<< 8)|(((num&0xFF000000)>>24) << 0));	
	printf("\n %x",num);
}
		
