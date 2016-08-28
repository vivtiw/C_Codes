#include <stdio.h>

int main(void) 
{

	 int pri, sec, i, v;
	 int arr[] = {4,10,3,8,6,7,2,7,9,2,0};
	 pri = sec = 0;
	 for (i = 0; arr[i]; ++i) {
		 v = arr[i];
	 	if (v > pri) sec = pri, pri = v;
	 	if (v > sec && v < pri) sec = v;
	 }
	 printf("pri is %d, sec is %d\n", pri, sec);
	 return 0;
}
