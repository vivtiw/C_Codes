#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

void insert_first(struct node **,int);
void insert_last(struct node **,int);
void insert_pos(struct node **,int,int);
void delete(struct node **,int);
void display(struct node **);

void insert_first(struct node **start,int val)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new-> data=val;
	new-> next=*start;
	*start= new;

}

void insert_last(struct node **start,int val)
{
	struct node *new,*temp=*start;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	if(*start==NULL)
	{
		*start=new;
		return;
	}
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new;
	}
}

void insert_pos(struct node **start,int val,int pos)
{
	int i=1;
	struct node *new,*temp=*start;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	if(pos==0)
	{
		new-> next=*start;
        	*start= new;
		return;
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}		
		new->next=temp->next;
		temp->next=new;
	}	
}

void delete(struct node **start,int val)
{

	struct node *temp,*ptr;
	temp=ptr=*start;
	if(val==ptr->data)
	{
		*start=ptr->next;
		return;
	}
	while(ptr!=NULL&&ptr->data!=val)
	{
		temp=ptr;
		ptr=ptr->next;
	}
	if(ptr!=NULL)
	{
		temp->next=ptr->next;
		free(ptr);
	}
	else
		printf("\n notfound\n");

}

void  reverse(struct node **start)
{
	struct node *ptr ,*temp,*prev;
	ptr=*start;
	temp=prev=NULL;

	while(ptr!=NULL)
	{
		*start=ptr;
		temp= ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = temp;
	}
}

void display(struct node **start)
{
	struct node *temp= *start;
	while(temp!=NULL)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
}
	
main()
{
	struct node *start=NULL;
	insert_pos(&start,10,0);
	insert_pos(&start,20,1);
	//insert_first(&start,10);
	//insert_last(&start,20);
	insert_pos(&start,30,3);
	insert_pos(&start,40,4);
	insert_pos(&start,50,5);
	display(&start);
	printf("\n");
	insert_pos(&start,60,3);
	display(&start);
//	printf("\n");
	//delete(&start,10);	
	//delete(&start,50);
	//delete(&start,80);
//	display(&start);
	reverse(&start);
	printf("\nafter reverse");
	display(&start);
}
