
#include "include/myheader.h"
#include <string.h>
#include <malloc.h>


void init(struct sorting *ptr,void *a,int size,int ele,int (*com)(void *,void *))
{
	ptr->array = a;
	ptr->size_array = size;
	ptr->size_element = ele;
	ptr->compare = com;
}

void Shorting(struct sorting obj) // Sorting function
{
        int i,j;
        for(i=0;i<obj.size_array;i++)
        {
                for(j=0;j<obj.size_array-1;j++)
                {
			if( (*obj.compare)( obj.array+(j*obj.size_element), obj.array+(j+1)*obj.size_element )==1 )
                        {
			        void * temp = malloc(obj.size_element);
				memcpy(temp, obj.array+(j*obj.size_element), obj.size_element);
				memcpy(obj.array+(j*obj.size_element), obj.array+((j+1)*obj.size_element), obj.size_element);
				memcpy(obj.array+((j+1)*obj.size_element),temp,obj.size_element);
        		        free(temp);
                	}
                }
        }
}
