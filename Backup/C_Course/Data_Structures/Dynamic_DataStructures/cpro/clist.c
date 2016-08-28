#include <stdio.h>
struct clist{
	int val;
	struct clist *next;
};

int main()
{
	void insert_end(struct clist **h,int val);
	void insert_beg(struct clist **h,int val);
	void delete_end(struct  clist **h);
	void delete_beg(struct clist **h);
	void delete_mid(struct clist **h,int val);
	int find_nth(struct clist *h,int n);
	void rev(struct clist **h);
	void dis(struct clist *h);
	struct clist *head=NULL;
	insert_end(&head,10);
	insert_end(&head,20);
	insert_end(&head,40);
	insert_end(&head,50);
	insert_end(&head,60);
	insert_end(&head,70);
	dis(head);
       rev(&head); 
	dis(head);
	find_nth(head,6);

}
void insert_end(struct clist **h,int val)
{
	struct clist *temp;
	temp=malloc(sizeof(*h));
	temp->val=val;
	if(!*h)
		*h=temp;
	else{
		struct clist *r=*h;
		while(r->next!=*h)
			r=r->next;
		r->next=temp;
	}
	temp->next=*h;
}
void insert_beg(struct clist **h,int val)
{
	struct clist *temp;
	temp=malloc(sizeof(*h));
	temp->val=val;
	if(!*h)
		temp->next=temp;
	else{
		struct clist *r=*h;
		while(r->next!=*h)
			r=r->next;
		r->next=temp;
		temp->next=*h;

	}
	*h=temp;
}
void delete_end(struct  clist **h)
{
	struct clist *temp=*h,*prev=*h;

	if(!temp)
		return ;
	while(temp->next!=*h){
		prev=temp;
		temp=temp->next;
	}
	if(temp==*h)
		*h=NULL;
	else
		prev->next=temp->next;
	free(temp);
}
void delete_beg(struct clist **h)
{
	struct clist *temp=*h,*r=*h;
	if(!temp)
		return ;
	while(temp->next!=*h)
		temp=temp->next;
	if(temp==*h)
		*h=NULL;
	else{
		temp->next=(*h)->next;
		*h=(*h)->next;
	}
	free(r);
}
void delete_mid(struct clist **h,int val)
{
	struct clist *temp=*h,*prev=*h,*r;
	if(!temp)
		return;
	do{
		if(temp->val==val){
			if(temp==*h){
				if((*h)->next==*h)
					*h=NULL;
				else{
					r=temp;
					while(r->next!=*h)
						r=r->next;
					*h=(*h)->next;
					r->next=*h;
				}
			}
			else
				prev->next=temp->next;

			free(temp);
			break;
		}
		prev=temp;
		temp=temp->next;
		
	}while(temp!=*h);

}
void rev(struct clist **h)
{
	struct clist *temp=*h,*q=*h,*he=*h;
	if(!*h)
		return ;
	while(temp->next!=he)
		temp=temp->next;

	do{
		q=q->next;
		(*h)->next=temp;
		temp=*h;
		if(q!=he)
			*h=q;
	}while(q!=he);
}
int find_nth(struct clist *h,int n)
{
	struct clist *temp=h,*he=h;
	int i;
	if(!h)
		return ;
	for(i=1;i<=n;i++){	
		h=h->next;
		if(h==he)
			return ;
	}
	while(h->next!=he){
		temp=temp->next;
		h=h->next;
	}
	printf("\n%d\n",temp->val);
	
}
void dis(struct clist *h)
{

	struct clist *temp=h;
	printf("\n");
	if(!h)
		return;
	do{
		printf(" %d",h->val);
		h=h->next;
	}while(h!=temp);
}


			
		
		
