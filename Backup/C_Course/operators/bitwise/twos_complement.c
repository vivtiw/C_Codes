/*********TWO'S COMPLEMENT*********/
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
/*TWO'S COMPLEMENT OF "a"*/
k=~a;
k=k+1;
printf("\nafter TWO'S COMPLEMENTING a:Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
/*TWO'S COMPLEMENT OF "b"*/
k=~b;
k=k+1;
printf("\nafter TWO'S COMPLEMENTING b :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
/*TWO'S COMPLEMENT OF "c"*/
k=~c;
k=k+1;
printf("\nafter TWO'S COMPLEMENTING c :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
}
