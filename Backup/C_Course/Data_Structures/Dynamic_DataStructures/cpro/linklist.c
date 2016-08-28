#include <stdio.h>
struct list{
	int val;
	struct list *next;
};

int main()
{
       struct list  *head=NULL;
       void insert_last(struct list **,int);
       void insert_first(struct list **,int);
       struct list*  reverse_list(struct list *h,struct list *prev);
       void disp(struct list *);
       insert_last(&head,30);
       insert_last(&head,40);
       insert_last(&head,50);
       insert_last(&head,60);
       disp(head);
       printf("\n");
       head = reverse_list(head,NULL);
       disp(head);
       

}

void insert_last(struct list **h,int val)
{
	struct list *temp;
	temp=malloc(sizeof(struct list));
	temp->val=val;
	if(!*h){
		*h = temp;
	}else{
		/*traverse end of list*/
		struct list *r=*h;
		while(r->next)
			r=r->next;
		r->next=temp;
	}
	temp->next =NULL;
}

void insert_first(struct list **h,int val)
{
	struct list *temp;
	temp=malloc(sizeof(struct list));
	temp->val=val;
	temp->next=*h;
	*h=temp;

}
void disp(struct list *h)
{
	printf("\n");
	if(h){
		disp(h->next);
		printf(" %d",h->val);
	}
}
struct list *reverse_list(struct list *h,struct list *prev)
{
	struct list *revh;
	if(!h)
		revh = prev;
	else{
		if(h->next)
			revh = reverse_list(h->next,h);
		h->next=prev;
	}
	return revh;

}
