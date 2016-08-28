#include<stdio.h>
int main()
{
        int a[7]={1},i;
        printf("\n");
                
        for(i=0;i<7;i++)
               printf(" %d ",*(a+i));
                    
        printf("\n%d \n",a[200]);
                    
                        
}

