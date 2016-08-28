#include <stdio.h>
#define prime(a,n) { \
		     int i=2;\
		      while(i<=a/2) {\
              		  if(a%i==0) { \
              		    n=0; \
              		    break; \
                          } \
                          i++; \
                      }\
		   }

int main()
{
	int a=12,b=1;
        prime(a,b);
	printf(" %d\n",b);
}
