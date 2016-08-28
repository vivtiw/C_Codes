//#define ALIGN(x,a)              __ALIGN_MASK(x,(typeof(x))(a)-1)
//#define __ALIGN_MASK(x,mask)    (((x)+(mask))&~(mask))
#define ALIGN(x,a)	( ((x) + (a-1)) & ~((a)-1))
main()
{
  int z=1, u=4;
 printf("\n ALIGN(z,u) = %d",ALIGN(z,u));

 printf("\n ((z) + (u-1)) = %d", ((z) + (u-1))) ;
 printf("\n (~(u-1)) = %d", (~(u-1)));
 printf("\n(x) + (a-1)) & ~((a)-1) = %d",((z) + (u-1)) & (~(u-1)) );
 


}

