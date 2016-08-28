/*********ONES COMPLEMENT*********/
#include<stdio.h>
main()
{
int i,j,k;
char a=13,b=0,c=1;
/*********displaying bit by bit form of "a" **********/
printf("binform of a=");
for(i=7;i>=0;i--)
{ 
j=(a>>i) & 0x01;
printf("%d",j);
}
printf("\n");
printf("binform of b=");
for(i=7;i>=0;i--)
{ 
j=(b>>i) & 0x01;
printf("%d",j);
}
printf("\n");
printf("binform of c=");

for(i=7;i>=0;i--)
{ 
j=(c>>i) & 0x01;
printf("%d",j);
}
/*ONES COMPLEMENT OF "a"*/
k=~a;
printf("\nafter ONES COMPLEMENTING a:Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
/*ONES COMPLEMENT OF "b"*/
k=~b;
printf("\nafter ONES COMPLEMENTING b :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
/*ONES COMPLEMENT OF "c"*/
k=~c;
printf("\nafter ONESCOMPLEMENTING c :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
}
