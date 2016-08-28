#include <stdio.h>
#include <stdlib.h>
 
struct Node   			
{
	//void *ptr;
	char data;
	struct Node *nextPtr;
};
typedef struct Node Queue;


Queue * headPtr = NULL;

void insert( char value )
{
        Queue *newPtr,*cur;

        newPtr = malloc( sizeof( Queue ) );

        if ( newPtr == NULL )
		return;

	newPtr->data = value;
        newPtr->nextPtr = NULL;

        if ( headPtr==NULL )
	        headPtr =newPtr;
        else
        {
        	for(cur=headPtr;cur->nextPtr!=NULL;cur=cur->nextPtr);
        	cur->nextPtr=newPtr;
        }

}

void delete(void)
{
        Queue * temp;

        if ( headPtr == NULL )
                return;
	while(headPtr!=NULL)
	{
		temp=headPtr->nextPtr;
		printf(" %c ",headPtr->data);
        	free( headPtr );
		headPtr=temp;
		
	}
}

void print( void )
{
        Queue * currentPtr = headPtr;

        if ( currentPtr == NULL )
        	return;

	while ( currentPtr != NULL )
        {
        	printf( "%c --> ", currentPtr->data );
                currentPtr = currentPtr->nextPtr;
        }
}


int main()
{ 

	insert( 'A');
	insert( 'B');
	insert( 'C');
	insert( 'D');
	insert( 'E');
	insert( 'F');
        print();
	delete();
        print();

   	return 0;
}


