#include <stdio.h>
#include <stdlib.h>

struct A {
	short int x;
	short int y;
};
int main()
{
	int *i;
	float *f;
	struct A *ptr;


	i = (int *)malloc(4);	
	if(i==NULL) {
		printf("\n failed to allocate memory \n");
		return 1;
	}
	
	*i=10;
	printf(" %d \n",*i);

	f = (float *)i;
	*f = 10.2;	
	printf(" %f \n",*f);

	ptr = (struct A *)f;
	ptr->x=10;
	ptr->y=20;
	printf(" %hd \n",ptr->x);
	printf(" %hd \n",ptr->y);

	
}
