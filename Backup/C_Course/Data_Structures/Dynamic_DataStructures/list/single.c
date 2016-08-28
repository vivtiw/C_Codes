/* 					Single Linked List	 						*/

#include<stdio.h>
#include<malloc.h>
#include<string.h>

/* Self Referential Structure to implement Dynamic struct node  Structure */
struct node {
	int age;
	char name[50];
	struct node *next;
};


/* Single Linked List Operations */

/* Function to insert the new node as first node in the list */
int insert_first(struct node  ** pptr,int a,char *n)	
{
	struct node  * new;
        new = (struct node  *) malloc (sizeof(struct node ));
        if(!new)
                return 0;
        new->age=a;
        strcpy(new->name,n);
	new->next = *pptr; 
	*pptr = new;
	return 1;
}

/* Function to insert the new node in the middle or end of the list */
int insert_middle(struct node  ** pptr,int pos,int a,char *n)
{
	struct node  * new;
	struct node  * start=*pptr; 
	int i=1;
        
	new = (struct node  *) malloc (sizeof(struct node ));
        if(!new)
                return 0;
    
        new->age=a;
        strcpy(new->name,n);
	if(start==NULL || pos==1)		
	{
		new->next = *pptr;
		*pptr = new;	/* Make new node as first node if list in empty or positions in one*/	
		return 1;
	}
	while((i<pos-1) && start )	/* Navigate upto position-1 node */
	{
		start=start->next;
		i++;
	}
	//f(start!=NULL)		/* Make new node as part of list */
	//{
	new->next = start->next; 	
	start->next = new;
	//}
	return 1;
		 
}

/* Print all nodes struct node  in the list */
void print_list(struct node  * ptr)	/* Print all nodes struct node  in the list */
{
	printf("\n");
	while(ptr)
	{
		printf("%d %s -> ",ptr->age,ptr->name);
		ptr = ptr->next;
	}
	printf(" NULL \n");
}


/* Function to delete a node for the list */
void delete_node(struct node  ** pptr,char *name)		/* Function to delete a node for the list */	
{
	struct node  * temp, *start = *pptr, *prev = *pptr;
	if(start==NULL)		/* Check if list is empty */	
	{
		printf("\n List is Empty \n");
		return;
	}
	if(strcmp(start->name, name)==0)	/* Delete first element */
	{
		temp = start;
		*pptr = start->next;
		free(temp);
		return;	
	}
	else
	{
		while( (strcmp(start->name,name)!=0) && start)	/* Search for the node to delete */
		{
			prev = start;
			start = start->next;
		}
		if(start != NULL)		/* Delete node */	
		{
			prev->next = start->next;
			free(start);
		}
		else
			printf("\n Node not Found \n");
	}
	
}

/* Function to count total number of elements in the list */
int count_node(struct node  * start)
{
	int count=1;
	while(start->next)
	{
		start=start->next;
		count++;	
	}
	return count;
}

/* Function to retrive Nth node from the list */
struct node  * get_Nth_node(struct node  * start,int index)
{
	int i=1;
	while(i++<index)
		start=start->next;
	return start;
}	

/* Function to Delete dulicates */

int delete_Duplicates(struct node  ** pptr)
{
	struct node  * prev, *curr = *pptr, *temp;
	if(curr)		/* Check List is empty */
	{	
		while(curr && curr->next)	
		{
			prev=curr->next;
			temp = curr;
			while(prev)
			{
				
				if(strcmp(curr->name,prev->name)==0)
				{
					temp->next = prev->next;
					free(prev);
					prev = temp->next;
					
				}else{		
					temp = prev;
					prev = temp->next;
				}
			}
			curr = curr->next;
		}
	}
	
}
/* find mid number without counting number of elements*/

void mid_element(struct node  * start)
{
	struct node  * temp = start;
	if(start->next)
	{
		while(temp && temp->next)	
		{
			temp = temp->next->next;	/* temp jump to next to next elemets */
			start=start->next;		/* start jumps to next element  */
		}
		printf("\n %d %s \n",start->age,start->name);
	}
}	


/* Reverse the List */
struct node  * reverse_list(struct node  * curr,struct node  * prev)
{
        struct node  * revh;
        if(!curr)
                revh = prev;
        else{
                        revh = reverse_list(curr->next,curr);
                curr->next=prev;
        }
        return revh;


}

int main()
{
	struct node  * start=NULL,*nth;	/* start pointing to first node in the list */
	
	/* Insert the nodes as first node */
	insert_first(&start,27,"xyz");	
	print_list(start);
	insert_first(&start,23,"abc");	
	print_list(start);
	insert_first(&start,25,"def");	
	print_list(start);
	insert_first(&start,30,"mnp");	
	print_list(start);


	/* Insert the node at given position */
	insert_middle(&start,4,34,"qrp");	
	print_list(start);
	insert_middle(&start,2,34,"qrp");	

	/* print list */
	print_list(start);


	/* Delete the node which contains the given name */
	delete_node(&start,"abc");
	print_list(start);

	printf("\n Total Number of Elements : %d \n",count_node(start));

	/* Get the node info at given position */
	nth = get_Nth_node(start,4);
	if(nth!=NULL)
		printf("\n Name : %s, Age : %d",nth->name,nth->age);			
	else
		printf("Not Valied Index");

	/* Delete Duplicates */
	delete_Duplicates(&start);
	print_list(start);
	
	/* Find mid element */
	mid_element(start);

	start = reverse_list(start,NULL);
	print_list(start);
				
}





	



