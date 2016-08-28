#include<stdio.h>
int main()
{
	int size;
	struct stu
	{
		int roll;
		char name;
		float h;
		char str;
	}__attribute__((packed));
	struct stu obj;

	printf("\n %u ",&obj.roll);
	printf("\n %u ",&obj.name);
	printf("\n %u ",&obj.h);
	printf("\n %u\n ",&obj.str);
	
	size = (int)&obj.roll;
	printf("\n Roll Align %d\n",size%4);
	size = (int)&obj.name;
	printf("\n Name Align %d\n",size%4);
	size = (int)&obj.h;
	printf("\n H Align %d\n",size%4);
	size = (int)&obj.str;
	printf("\n Str Align %d\n",size%4);
	
	
	printf("\n %d \n",(int)&obj/sizeof(struct stu));
}
