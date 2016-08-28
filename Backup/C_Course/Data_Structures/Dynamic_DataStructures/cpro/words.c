#include <stdio.h>
struct clist {
	int val;
	struct clist *next;
};
int main()
{
	struct clist *head = NULL;
	void display(struct clist *h);
	void insert_last(struct clist **h,int val);
	void insert_first(struct clist **h,int val);
	void insert_mid(struct clist **h,int val);
	void delete_last(struct clist **h);
	void delete_first(struct clist **h);
	insert_mid(&head,120);
	insert_mid(&head,130);
	display(head);
	delete_first(&head);
	 display(head);
}

void insert_last(struct clist **h,int val)
{
	struct clist *temp ;
	temp = malloc(sizeof(*temp));
	temp->val = val;
	if(!*h){
		*h = temp;
	}
	else{
		struct clist *r=*h;
		/*move end of the list */
		while(r->next!=*h)
			r = r->next;
		r->next = temp;
	}
	temp->next = *h;



}
void insert_first(struct clist **h,int val)
{
	struct clist *temp ;
	temp = malloc(sizeof(*temp));
	temp->val = val;
	if(!*h){
		*h = temp;
		temp->next = *h;
	}else{
		struct clist *r=*h;
		/*move end of the list */
		while(r->next!=*h)
			r=r->next;
		r->next = temp;
		temp->next = *h;
		*h = temp;
	}
	


}
void insert_mid(struct clist **h,int val)
{
	struct clist *t1,*t2,*temp;
	temp = malloc(sizeof(*temp));
	temp->val = val;
	if(!*h){
		*h = temp;
		temp->next = temp;
	}else{
		t1 = *h;
		t2 = t1->next;
		while(t2!=*h &&t2->next!=*h){
			t1 = t1->next;
			t2 = t2->next->next;
		}
		temp->next = t1->next;
		t1->next = temp;
	}
}
void delete_last(struct clist **h)
{
	struct clist *temp,*prev;
	if(!*h)
		return;
	temp = *h;
		
	while(temp->next!=*h){
		prev = temp;
		temp=temp->next;
	}
	if(temp ==*h)
		*h = NULL;
	else
		prev->next=temp->next;
	free(temp);
}
void delete_first(struct clist **h)
{
	struct clist *temp = *h;
	if(!*h)
		return;
	if(temp->next == temp)
		*h = NULL;
	else{
		struct clist *r;
		while(r->next != *h)
			r=r->next;
		*h = temp->next;
		r->next = *h;
	}
	free(temp);
	


}

void display(struct clist *h)
{
	struct clist *temp = h;
	if(!temp)
		return;
	printf("\n");
	do{
		printf(" %d",temp->val);
		temp = temp->next;
	}while(temp != h);
}
		

