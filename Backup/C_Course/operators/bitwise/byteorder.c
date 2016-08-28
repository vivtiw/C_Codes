/*********converting byteorder from littlendian to bigendian**************/

#include<stdio.h>
void printBits(int x)
{
	int i,j;
	for(i=31;i>=0;i--)
	{ 
		j=(x>>i) & 0x01;
		printf("%d",j);
	}	
}

main()
{
	int i,j=0,k=0;
	unsigned int dword;
	printf("enter number\n" );
	scanf("%x",&dword);
	/*****display of bytes before converting*********/
	printf("bytes before converting:");
	for(i=31;i>=0;i--)
{
j=(dword>>i)&0x00000001;
if(i%8==0)
printf("%d\n",j);
else
printf("%d",j);
}
for(i=0;i<=24;i+=8)
{
if(i!=24)
k=(((dword>>i)&0x000000ff)|k)<<8;
else
k=(((dword>>i)&0x000000ff)|k);
}

printf("%x\n",k);
printf("bytes after converting to bigendian:");
for(i=31;i>=0;i--)
{
j=(k>>i)&0x00000001;

if(i%8==0)
printf("%d\n",j);
else
printf("%d",j);
}

}
