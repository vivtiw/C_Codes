#include <stdio.h>	
#include <stdlib.h>

struct dynamic_array {
	int data;
	struct dynamic_array *next;	
};
struct dynamic_array *start=NULL;	/* consider this pointer as global object */

int insert(int data)
{
	struct dynamic_array *new;

	/*allocate memory for new object*/
	new = (struct dynamic_array *) malloc(sizeof(struct dynamic_array));
	if(new==NULL)
		return 0;		

	/* initialize the new memory */
	new->data = data;

	/* initialize the "next" member in new memory with the start pointer so the the new object will decome the first object in the dynamic array*/
	new->next = start;

	/* initialize the "start" pointer with newly allocated memory so that new "start" pointer to new object as it is the first object in the list*/
	start = new;	

	return 1;		
}

int delete(void)
{
	struct dynamic_array *del_obj;
	if(start==NULL)
		return 0;

	/* store the first element address in a temp pointer as we want to delete this element*/
	del_obj = start;

	/* intialize the start pointer with start->next so that the second element in the dynamic array decomes the first element */ 
	start = start->next;

	/* now dealloct the memory stored in temp pointer */
	free(del_obj);

	return 1;	
}


void print_array(void)
{
	struct dynamic_array *temp;
	temp = start;
	while (temp) {
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	print_array();
	delete();
	print_array();
	delete();
	print_array();
	delete();
	print_array();
}
