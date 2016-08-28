#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<30;i++)
         {
            if(i==20)
             continue;         
            printf("%d ",i);
          }
	printf("\n-----------------------\n");
	disp();
}

void disp()
{
      int i=0;
      while(i<30)
      {
            if(i==20)
             continue;         
            printf("%d ",i++);
          }
}         
