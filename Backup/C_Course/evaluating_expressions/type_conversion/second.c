/*

This program explains  how can we temporarily change the type of a variable or expression,         temporarily using a cast to force the type of the result. called as casting.

Author 	:  Vivek Tiwari
Version : 1.0

*/
#include<stdio.h>

int main()
{
	float b = 2/5;			//dividing two ints will results in an int.
	float c = (float)(2/5);		//again dividing two ints,and then we cast it to the float 
	float d = (float)2/5;		//2 is converted to float 2.0 and divided by 5.
	float e = (float)2/(float)5;	//2 & 5 are converted to floats 2.0,5.0 and divided.
	float f = ((float)2)/((float)5);//represents the best style of the five expressions. 
	printf("%f  %f  %f  %f  %f\n", b, c ,d, e, f);
}
