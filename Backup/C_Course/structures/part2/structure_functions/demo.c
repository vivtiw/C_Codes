#include<stdio.h>
	struct A		// Structure Definition
	{
		int a,b,result;
	};
void  add(struct A *);
int main()
{
	struct A obj={10,20}; // Structure object Definition

	add(&obj); // Function Call
	
	printf("\n %d + %d = %d\n",obj.a,obj.b,obj.result);
	
}

void add(struct A *temp)
{
	temp->result=temp->a+temp->b;
	              
}
