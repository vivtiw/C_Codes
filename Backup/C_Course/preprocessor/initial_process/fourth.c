#include<stdio.h>

#define PI 3.14			// PI is preprocessing keyword
#define $ 10			// 10 is a preprocessing number 
#define FLOAT 345.004e-3	// 345.004e-3 is a preprocessing number

//#define xx 0xE+12		// is a preprocessing number which does not translate to any valid numeric constant, therefore a syntax error. It does not mean 0xE + 12, which is what you might haveintended.

#define	C '\"'
#define	NAME "VEDA SOLUTIONS"

#define MAX(x,y)  (x>y)?x:y

int main()
{
	int a,b;
	char *name1 = NAME;
	b = $;
	printf("\n *****************\
		   ******************\
		   *******************\
		   ***************Welcome \
	***************************to C\n");
	printf("\n %g \n",FLOAT);
//	printf("\n %d \n",xx);
	printf("\n %c \n",C);
	printf("\n %s \n",NAME);
	printf("\n %d \n",MAX(10,30));
}
