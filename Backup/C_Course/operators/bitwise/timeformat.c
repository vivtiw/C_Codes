#include<stdio.h>
main()
{


int i,j;
unsigned int hms=0;
unsigned int data;
/********storing mm dd yy***********/
printf("enter the  time in hh:mm:ss\n");
scanf("%d",&data);
hms=hms|(data<<12);
scanf("%d",&data);
hms=hms|(data<<6);
scanf("%d",&data);
hms=hms|(data);
for(i=31;i>=0;i--)
{

j=(hms>>i)&0x00000001;
printf("%d",j);
}
/***********reading mm dd yy**********/
data=(hms>>12)&0x0000001f;
printf(" %d:",data);
data=(hms>>6)&0x0000003f;
printf("%d:",data);
data=(hms)&0x0000003f;
printf(" %d:",data);
}
