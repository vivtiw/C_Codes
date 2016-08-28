#include<stdio.h>
struct dlist{
	int val;
	struct dlist *next,*prev;
};
int main()
{
	struct dlist *head=NULL;
	void insert(struct dlist **h,int val);
	void insert_beg(struct dlist **h,int val);
	void del_mid(struct dlist **h);
	void del_last(struct dlist **h);
	void del_first(struct dlist **h);
	void rev(struct dlist **h);
	void disp(struct dlist *h);
	insert(&head,10);
	insert_beg(&head,20);
	insert(&head,30);
	insert(&head,40);
	insert(&head,50);

	disp(head);
	printf("\n");
	rev(&head);
	disp(head);


}
void insert(struct dlist **h,int val)
{
	struct dlist *temp;
	temp=malloc(sizeof(*h));
	temp->val=val;
	if(!*h){
		temp->prev=NULL;
		*h=temp;
	}else{
		struct dlist *r=*h;
		while(r->next)
			r=r->next;
		r->next=temp;
		temp->prev=r;
	}
	temp->next=NULL;
}
void insert_beg(struct dlist **h,int val)
{
	struct dlist *temp;
	temp=malloc(sizeof(*h));
	temp->val=val;
	temp->next=*h;
	temp->prev=NULL;
	if(*h)
		(*h)->prev=temp;
	*h=temp;

}
void del_last(struct dlist **h)
{
	struct dlist *temp=*h;
	if(!*h)
		return ;
	while(temp->next)
		temp=temp->next;
	if(temp==*h)
		*h=NULL;
	else
		temp->prev->next=NULL;
	free(temp);
}
void del_first(struct dlist **h)
{
	struct dlist *temp=*h;
	if(!temp)
		return;
	*h=(*h)->next;
	if(*h)
		(*h)->prev=NULL;
	free(temp);
}
	
void del_mid(struct dlist **h)
{
	struct dlist *t1,*t2;
	if(!*h)
		return;
	t1=*h;
	t2=t1->next;
	while(t2 && t2->next){
		t1=t1->next;
		t2=t2->next->next;
	}
	if(t1==*h){
		if((*h)->next){
			*h=(*h)->next;
			t1->prev=NULL;
		}
		else
			*h=NULL;
	}else
		t1->prev->next=t1->next;

	free(t1);

}

void rev(struct dlist **h)
{
	struct dlist *temp=NULL,*q=*h;
	while(q){
		q=q->next;
		(*h)->next=temp;
		(*h)->prev=q;
		temp=*h;
		if(q)
			*h=q;
	}
}
void disp(struct dlist *h)
{
	if(!h)
		printf("List is empty");
	while(h){
		printf(" %d",h->val);
		h=h->next;
	}

}
