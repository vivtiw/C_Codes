#include<stdio.h>
int main()
{
int i=0;
int aryChrCount[26] = { 0 };  /* A-Z */
char c = '\0';
i=0;
while ((c = getchar()) != EOF)
    aryChrCount[i++]=c;
printf("\n i = %d\t %s\n",i,aryChrCount);
}
