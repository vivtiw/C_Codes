#include <stdio.h>

#define mkstr(a)        #a
#define strcat(a,b)     mkstr(a##b)
#define CAT(a,b)        a##b

int main()
{
	int a=CAT(2,5);
	float f = CAT(10,e2);
	char str[20]= strcat(Veda,Solutions);			

	printf(" a = %d\n",a);
	printf(" f = %f\n",f);
	printf(" str = %s\n",str);
}	
