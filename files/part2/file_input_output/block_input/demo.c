#include<stdio.h>
int main()
{
	void *p;
	FILE *fp,*des;
	fp = fopen("./a.out","r");
	des = fopen("temp","w");

	p = malloc(100);
	while(fread(p,100,1,fp)!=0)
		fwrite(p,100,1,des);
	
}
