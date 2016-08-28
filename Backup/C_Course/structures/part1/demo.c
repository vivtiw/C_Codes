#include<stdio.h>
int main()
{
	struct A
	{
		int a;
		short g; 
		float b;
		char c ;
	}obj/*__attribute__((packed))*/;
	
	printf("\n %u ",((int)&obj)%(sizeof(struct A)));
	printf("\n %u %d",&obj,sizeof(struct A));
}
