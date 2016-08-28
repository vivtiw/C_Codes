#include<stdio.h>
int x=1;
static int y=2;
main()
{
	f1();	
	f2();
	printf("\n in main\n");
	printf("\n %d ",++x);
	printf("\n %d ",--y);
}
int f1()
{
  	x++;
  	y++;
	printf("\n in f1\n");
	printf("\n %d ",x);
        printf("\n %d ",y);

}
int f2()
{
	x++;
 	y++;
	printf("\n in f2\n");
        printf("\n %d ",x);
        printf("\n %d ",y);

}
