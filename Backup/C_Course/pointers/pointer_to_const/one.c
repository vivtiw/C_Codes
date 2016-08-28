#include<stdio.h>
main()
{
int i=3,j=7;
const int *p;
p=&i;
//p++;
printf("%d",*p);
p++;
p=&j;

printf("%d",*p);
}
