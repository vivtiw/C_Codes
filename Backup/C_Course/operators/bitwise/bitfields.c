#include<stdio.h>
//#define pragmapack 1
struct emp
{
char gender:1;
char mar_stat:5;
char hobby:3;
char sceme:4;
};
main()
{
struct emp e;
printf("%d",sizeof(e));
}
