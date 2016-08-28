#include<stdio.h>
int main()
{
	int a=10,result;
	result = fib(a);
	printf("\n %d \n",result);
}
int fib(int num)
/* Fibonacci value of a number */
{       switch(num) {
        case 0:
                return(0);
                break;
        case 1:
                return(1);
                break;
        default:  /* Including recursive calls */
                return(fib(num - 1) + fib(num - 2));
                break;
        }
}
