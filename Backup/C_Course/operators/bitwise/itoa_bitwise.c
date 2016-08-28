#include<stdio.h>
main()
{
unsigned short num;
int i,j=0,k;
char str[8];
printf("enter the short intezer num\n");
scanf("%hd",&num);
for(i=12;i>=0;i-=4)
{
k=(num>>i)&0x000f;
if(k>=10)
str[j]=k+87;
else
str[j]=k+48;
j++;
}
printf("%s",str);
}
