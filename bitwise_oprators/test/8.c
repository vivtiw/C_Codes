#include<stdio.h>
main()
{
	union
	{
	
		struct
                {
                        int i;
                        int j;
                }st;
		
		struct
		{
			char c[2];
			char ch[2];
		}s;
	}u={12,1};
	
	printf("\n %d size of union is \n",sizeof(u));
		
	printf("\n %d %d \n",u.s.c[0], u.s.c[1]);
	
	printf("\n %d %d \n",u.st.i, u.st.j);
}




