/* linked list example */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* function prototypes */
struct node * initnode( char *, int );
void printnode( struct node * );
void printlist( struct node * );
void add( struct node * );
struct node * searchname( struct node *, char * );
void deletenode( struct node * );
void insertnode( struct node * );
void deletelist( struct node * );

typedef struct node Node;
/* definition of a data node for holding student information */
struct node {
   char name[20];
   int  id;
   struct node *next;
};

/* head points to first node in list, end points to last node in list */
/* initialise both to NULL, meaning no nodes in list yet */
struct node *head =  NULL;
struct node *end =  NULL;

/* this initialises a node, allocates memory for the node, and returns   */
/* a pointer to the new node. Must pass it the node details, name and id */
struct node * initnode( char *name, int id )
{
   struct node *ptr;
   ptr = (struct node *) calloc( 1, sizeof(struct node ) );
   if( ptr == NULL )                       /* error allocating node?      */
       return  NULL;        /* then return NULL, else      */
   else {                                  /* allocated node successfully */
       strcpy( ptr->name, name );          /* fill in name details        */
       ptr->id = id;                       /* copy id details             */
       return ptr;                         /* return pointer to new node  */
   }
}

/* this prints the details of a node, eg, the name and id                 */
/* must pass it the address of the node you want to print out             */
void printnode( struct node *ptr )
{
   printf("\n%5d\t\t%s\n", ptr->id,ptr->name );
}

/* this prints all nodes from the current address passed to it. If you    */
/* pass it 'head', then it prints out the entire list, by cycling through */
/* each node and calling 'printnode' to print each node found             */
void printlist( struct node *ptr )
{
   while( ptr != NULL )           /* continue whilst there are nodes left */
   {
      printnode( ptr );           /* print out the current node           */
      ptr = ptr->next;            /* goto the next node in the list       */
   }
}

/* this adds a node to the end of the list. You must allocate a node and  */
/* then pass its address to this function                                 */
void add( struct node *new )  /* adding to end of list */
{
   if( head == NULL )      /* if there are no nodes in list, then         */
       head = new;         /* set head to this new node                   */
   else
   	end->next = new;   /* link in the new node to the end of the list */
   new->next = NULL;       /* set next field to signify the end of list   */
   end = new;              /* adjust end to point to the last node        */
}

/* search the list for a name, and return a pointer to the found node     */
/* accepts a name to search for, and a pointer from which to start. If    */
/* you pass the pointer as 'head', it searches from the start of the list */
struct node * searchname( struct node *ptr, char *name )
{
    while( strcmp( name, ptr->name ) != 0 ) {    /* whilst name not found */
       ptr = ptr->next;                          /* goto the next node    */
       if( ptr == NULL )                         /* stop if we are at the */
          break;                                 /* of the list           */
    }
    return ptr;                                  /* return a pointer to   */
}                                                /* found node or NULL    */

/* deletes the specified node pointed to by 'ptr' from the list           */
void deletenode( struct node *ptr )
{
   struct node *temp, *prev;
   temp = ptr;    /* node to be deleted */
   prev = head;   /* start of the list, will cycle to node before temp    */

   if( temp == prev ) {                    /* are we deleting first node  */
       head = head->next;                  /* moves head to next node     */
       if( end == temp )                   /* is it end, only one node?   */
          end = end->next;                 /* adjust end as well          */
       free( temp );                       /* free space occupied by node */
   }
   else {                                  /* if not the first node, then */
       while( prev->next != temp ) {       /* move prev to the node before*/
           prev = prev->next;              /* the one to be deleted       */
       }
       prev->next = temp->next;            /* link previous node to next  */
       if( end == temp )                   /* if this was the end node,   */
           end = prev;                     /* then reset the end pointer  */
       free( temp );                       /* free space occupied by node */
   }
}

/* inserts a new node, uses name field to align node as alphabetical list */
/* pass it the address of the new node to be inserted, with details all   */
/* filled in                                                              */
void insertnode( struct node *new )
{
   struct node *temp, *prev;                /* similar to deletenode      */

   if( head == NULL ) {                     /* if an empty list,          */
       head = new;                          /* set 'head' to it           */
       end = new;
       head->next = NULL;                   /* set end of list to NULL    */
       return;                              /* and finish                 */
   }

   temp = head;                             /* start at beginning of list */
                      /* whilst currentname < newname to be inserted then */
   while( strcmp( temp->name, new->name) < 0 ) {
          temp = temp->next;                /* goto the next node in list */
          if( temp == NULL )                /* dont go past end of list   */
              break;
   }

   /* we are the point to insert, we need previous node before we insert  */
   /* first check to see if its inserting before the first node!          */
   if( temp == head ) {
      new->next = head;             /* link next field to original list   */
      head = new;                   /* head adjusted to new node          */
   }
   else {     /* okay, so its not the first node, a different approach    */
      prev = head;   /* start of the list, will cycle to node before temp */
      while( prev->next != temp ) {
          prev = prev->next;
      }
      prev->next = new;             /* insert node between prev and next  */
      new->next = temp;
      if( end == prev )             /* if the new node is inserted at the */
         end = new;                 /* end of the list the adjust 'end'   */
   }
}

/* this deletes all nodes from the place specified by ptr                 */
/* if you pass it head, it will free up entire list                       */
void deletelist( struct node *ptr )
{
   struct node *temp;

   if( head == NULL )
   {
	printf("\n List is Empty\n");
	return;   	    /* dont try to delete an empty list       */
   }

   if( ptr == head ) {      /* if we are deleting the entire list         */
       head = NULL;         /* then reset head and end to signify empty   */
       end = NULL;          /* list                                       */
   }
   else {
       temp = head;          /* if its not the entire list, readjust end  */
       while( temp->next != ptr )         /* locate previous node to ptr  */
           temp = temp->next;
       end = temp;                        /* set end to node before ptr   */
   }

   while( ptr != NULL ) {   /* whilst there are still nodes to delete     */
      temp = ptr->next;     /* record address of next node                */
      free( ptr );          /* free this node                             */
      ptr = temp;           /* point to next node to be deleted           */
   }
}

/* this counts total number of nodes in the list			  */
int count(struct node *ptr)
{
   int count_node=0;
   if(ptr==NULL)	     /* check whether list is empty	  	  */
       return count_node;
   else
   {
       while(ptr != NULL)    /* if not empty count total number of nodes  */
       {
	   count_node++;  
	   ptr = ptr->next;
       }
       return count_node;
   }
	   	 	
}

/* this is the routine which reverse the list */
Node * reverseList (Node * current, Node * parent)
{
  Node *revHead;
  if (current == NULL)
    revHead = parent;
  else
    {
      revHead = reverseList (current->next, current);
      current->next = parent;
    }
  return revHead;
}


/* this is the main routine where all the logic fits                 */
int main()
{
   char name[20];
   int id, ch = 1;
   struct node *ptr;

   while( ch != 0 ) {
      printf("\n\t\t\t Main Menu\n");
      printf("\n\t\t1. Add a Record \n");
      printf("\t\t2. Delete a Record \n");
      printf("\t\t3. List all Records \n");
      printf("\t\t4. Search for a Record \n");
      printf("\t\t5. Insert a Record \n");
      printf("\t\t6. Delete a11 Record \n");
      printf("\t\t7. Number of Records \n");
      printf("\t\t8. Reverse List \n");
      printf("\t\t0. Quit\n");
      printf("\t\tEnter ur Choice : ");
      scanf("%d", &ch );
      switch( ch )
      {
          case 1:  /* add a name to end of list */
                   printf("Enter in name -- ");
                   scanf("%s", name );
                   printf("Enter in id -- ");
                   scanf("%d", &id );
                   ptr = initnode( name, id );
                   add( ptr );
                   break;
          case 2:  /* delete a name */
	  	   
   		   if(head==NULL)	
			printf("\n List is Empty\n");
		   else
		   {
                   	printf("Enter in name -- ");
                   	scanf("%s", name );
                   	ptr = searchname( head, name );
                   	if( ptr ==NULL ) {
                   	    printf("Name %s not found\n", name );
                   	}
                   	else
                   	   deletenode( ptr );
		   }
                   break;

          case 3:  /* list all nodes */
		   printf("\n ID\t\tName\n");
		   printf(" -------------------------\n");
                   printlist( head );
                   break;

          case 4:  /* search and print name */
                   printf("Enter in name -- ");
                   scanf("%s", name );
                   ptr = searchname( head, name );
                   if( ptr ==NULL ) {
                       printf("Name %s not found\n", name );
                   }
                   else
                      printnode( ptr );
                   break;
          case 5:  /* insert a name in list */
                   printf("Enter in name -- ");
                   scanf("%s", name );
                   printf("Enter in id -- ");
                   scanf("%d", &id );
                   ptr = initnode( name, id );
                   insertnode( ptr );
                   break;
	  case 6:
		   deletelist(head); 
		   break;
	  case 7:
		   {
		       int count_node;
		       count_node=count(head);
		       printf("\n Total Number of Records : %d\n",count_node);
		    }
		break;
	case 8:
		 head= reverseList(head,NULL);
		
      }
   }
}


/* 	Implement the following interfaces
	1. MoveNode()	- Moves node from one position to another position
	2. Split()	- Splits the list into two sublist
	3. ShortAss()	- Shorts elements in assending order
	4. ShortDes()	- Shorts elements in decending order
	5. Reverse()	- Reverse the list by rearranging all data in the nodes
*/
