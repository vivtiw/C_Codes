#include<stdio.h>
#include<malloc.h>

struct node
{
        int data;
        struct node *prev, *next;
};

void insert_first(struct node **,int);
void insert_last(struct node **,int);
void insert_position(struct node **,int,int);
void delete_first(struct node **);
void delete_last(struct node **);
void delete_node(struct node **,int);
void display(struct node *);

void insert_first(struct node **start,int val)
{
        struct node *new;
        new=(struct node *)malloc(sizeof(struct node));
        new->data=val;
        new->next=NULL;
        new->prev=NULL;
        if(*start==NULL)
        	*start=new;
	else
	{
		new->next=*start;
		(*start)->prev=new;
		*start=new;
	}
}
		
void insert_last(struct node **start,int val)
{
	struct node *new,*temp=*start;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	new->prev=NULL;
	if(*start==NULL)
		*start=new;
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new;
		new->prev=temp;
	}
	
}

void insert_position(struct node **start,int val,int pos)
{
	int i=1;
	struct node *new,*temp=*start;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	new->prev=NULL;
	if(*start==NULL||pos==1)
	{
		if(*start)
		{
			new->next=*start;
			(*start)->prev=new;
		}
		*start=new;
		return;
	}

	else
	{
		while(i<pos-1&&temp)
		{
			temp=temp->next;
			i++;
		}
	}
	if(temp)
	{
		new->next=temp->next;
		temp->next=new;
		new->prev=temp;
		if(new->next!=NULL)
			new->next->prev=new;

	}		
	else
		printf("\n not valid position\n");

}	
		

void delete_first(struct node **start)
{
	struct node *temp = *start;
	printf("\n deleting fist element\n");
	if(temp == NULL)
	{
		printf("\n list is empty\n");
		return ;
	}
	else
	{
		if(temp->next)
		{
			temp->next->prev=NULL;
			*start=temp->next;
			free(temp);
		}
		else
		{
			//temp->prev=NULL;
			free(temp);
		}
	
	}	
		
}

void delete_last(struct node **start)
{
	struct node *temp=*start;
	printf("\n deleting last element\n");
	if(temp==NULL)
	{
		printf("\n list is empty\n");
		return;
	}
	else
	{
		if(temp->next)
		{
			while(temp->next->next!=NULL)
				temp=temp->next;
			temp->next=NULL;
		}
		else
			free(temp);
	
	}
}

void delete_node(struct node **start,int val)
{
	struct node *temp=*start,*prev;
	if(temp==NULL)
	{
		printf("\n list is empty\n");
		return ;
	}
	
	if(temp->data==val)
	{
		temp->next->prev=NULL;
                *start=temp->next;
                free(temp);
		return;
	}
	else
	{
		while(temp->data!=val&&temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp->next!=NULL)
		{
			prev->next=temp->next;
			temp->next->prev=prev;
			free(temp);
		}
		else
		{
			if(temp->data==val)
				free(temp);
		
			printf("\n not found\n");
		}
	}	
		
}	

void reverse_list(struct node **start)
{
	struct node *temp=*start,*prev;;
	for(;temp->next!=NULL;temp=temp->next);
		for(prev=temp;temp!=NULL;temp=temp->prev)
			printf(" %d-> ",temp->data);
}	


void display(struct node  *start)
{
	struct node *temp=start;
	printf("\n");
	while(start)
	{
		printf("%d ->",start->data);
		temp=start;
		start=start->next;
	}
	printf("NULL \n");

	while(temp)
	{
		printf("%d ->",temp->data);
		temp=temp->prev;
	}
	printf("NULL \n");
}	
	

main()
{
        struct node *start=NULL;
	insert_position(&start,10,1);
	insert_position(&start,20,2);
	insert_position(&start,30,3);
	insert_position(&start,40,4);
	insert_position(&start,50,5);
	insert_position(&start,60,6);
	display(start) ;
	reverse_list(&start);
//	delete_node(&start,10);
//	delete_node(&start,40);
//	display(start);
//	insert_position(&start,80,1);
//	display(start);
}

