#include<stdio.h>
#include<malloc.h>

struct tree
{
	int key;
	struct tree *right,*left;
};

struct tree *insert_node(struct tree **,int);
void insert_left(struct tree *,struct tree *);
void insert_right(struct tree *,struct tree *);
void find(struct tree *,int data);
void del(struct tree *);
void display(struct tree *);

struct tree * insert_node (struct tree **root,int data)
{
	struct tree *new,*temp;
	new=(struct tree *)malloc(sizeof(struct tree));
	new->key=data;
	new->right =NULL;
	new->left =NULL;

	if(*root==NULL)
	{
		*root=new;
		return ;
	}
	temp=*root;
	if(temp->key > new->key)
			insert_left(temp,new);
	else
			insert_right(temp,new);
	
}	

void insert_right(struct tree *temp,struct tree *new)
{
	if(temp->right==NULL)
	{
		temp->right=new;
		return;
	}
	else
	{
		temp=temp->right;
		if(temp->key > new->key)
			insert_left(temp,new);
		else
			insert_right(temp,new);
	}
}

void insert_left(struct tree *temp,struct tree *new)
{
        if(temp->left==NULL)
        {
                temp->left=new;
                return;
        }
        else
        {
                temp=temp->left;
                if(temp->key > new->key)
                        insert_left(temp,new);
                else
                        insert_right(temp,new);
        }
}

void delete (struct tree **root,int data)
{
	struct tree *temp=*root;
	find(temp,data);
}

void find(struct tree *temp, int data)
{
	if(temp==NULL)
	{
		printf("\n Tree is empty\n");
		return;
	}
	if(temp->key==data)
		del(temp);
	else if(temp->key > data)
		find(temp->left,data);
	else 
		find(temp->right,data);

}

void del(struct tree *temp)
{
	struct tree *t =temp;

	if(temp->right==NULL & temp->left==NULL)
	{
		free(temp);
		printf("\n node deleted\n");
	}	
	if(temp->right==NULL&temp->left!=NULL)
	{
		temp->key=temp->left->key;
		temp->left=NULL;
	}
	else if(temp->right!=NULL & temp->left==NULL)
	{
		temp->key=temp->right->key;
		temp->right=NULL;
	}
	else if(temp->right!=NULL&temp->left!=NULL)
	{
		t=temp->left;
		while(t->right)
			t=t->right;
			printf("\n temp value is %d",temp->key);
			printf("\n value is %d",t->key);
		temp->key=t->key;
		free(temp);
	}
	else
	{
		printf("\n node not found \n");
	}
}
	
void preorder(struct tree *root)
{
	if(root!=NULL)			
	{
		printf("\t %d",root->key);					
		preorder(root->left);		
		preorder(root->right);	
	}
}
void postorder(struct tree *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("\t%d",root->key);
	}
}
void inorder(struct tree *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\t%d",root->key);
		inorder(root->right);
	}
}

void display(struct tree *root)
{
	printf("\n\tpreorder");
	preorder(root);
	printf("\n\n\tpostorder");
	postorder(root);
	printf("\n\n\tinorder");
	inorder(root);
}
main()
{
	struct tree *root=NULL;
	insert_node(&root,23);
	insert_node(&root,18);
	insert_node(&root,20);
	insert_node(&root,12);
	insert_node(&root,44);
	insert_node(&root,35);
	insert_node(&root,52);
//	insert_node(&root,40);
//	insert_node(&root,45);
//	insert_node(&root,38);
//	insert_node(&root,50);
	display(root);
	printf("\n");
	delete(&root,44);
	display(root);
}


