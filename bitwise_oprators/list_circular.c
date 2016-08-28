#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

void create_node(struct node **,int);
void display(struct node **);
//int count_node(struct node **);

void create_node(struct node **start,int val)
{
  struct node * new;
	new=(struct node *) malloc(sizeof(struct node));
	new->data=val;
	new->next=*start;
	*start=new;
	
}
void display(struct node **start)
{
	int count=0;
   	struct node *temp = *start;
     	while(temp!=*start)
     	{
		count++;
        	printf("%d ", temp->data);
       		temp = temp->next;
     	}
	printf("\n %d", count);
}
	

main()
{
	struct node *start=NULL;
	create_node(&start,10);
	display(&start);
//	count_node(&start);
}




