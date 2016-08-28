#include <sys/param.h>
int main()
{
   #ifdef __BYTE_ORDER
   #if __BYTE_ORDER == __LITTLE_ENDIAN
   	printf("\n %s \n","I_AM_LITTLE_ENDIAN");
   #else
   #if __BYTE_ORDER == __BIG_ENDIAN
   	printf("\n %s \n","I_AM_BIG_ENDIAN");
   #else
       printf("Error: unknown byte order!");
   #endif
   #endif
   #endif 
}
/* __BYTE_ORDER */
  /* if(am_big_endian())
   	printf("\n %s \n","I_AM_BIG_ENDIAN");
   else
   	printf("\n %s \n","I_AM_LITTLE_ENDIAN");	
}
int am_big_endian()
{
    long one= 1;
    return !(*((char *)(&one)));
    return !(*((char *)&one));
}*/
