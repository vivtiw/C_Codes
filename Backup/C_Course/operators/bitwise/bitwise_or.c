/*********BIT WISE ORING*********/
#include<stdio.h>
main()
{
	int i,j,k;
	char a=13,b=0,c=1;
	/*displaying bits in a variables*/
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
/*BITWISE OR OPERATION B/W "a and b"*/
k=a|b;
printf("\nafter ORING a with b :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
/*BITWISE OR OPERATION B/W "a and c"*/
k=a|c;
printf("\nafter ORING a with c :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
/*BITWISE OR OPERATION B/W "b and c"*/
k=b|c;
printf("\nafter ORING b with c :Binform =");
for(i=7;i>=0;i--)
{ 
j=(k>>i)&0x01;
printf("%d",j);
}
}
