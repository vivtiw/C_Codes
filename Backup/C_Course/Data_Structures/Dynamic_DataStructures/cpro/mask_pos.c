main()
{
	int  pos=5,b,i,j,c=0,d;
	int value=5010;
	for(i=(sizeof(value)*8)-1;i>=0;i--){
			if(i!=pos-1)
				d = ((value>>i)&1); 
			else
				d=0;

			c = c<<1;
			c = c|d;
	}

	for(i=(sizeof(value)*8)-1;i>=0;i--)
               printf("%d",(value>>i)&1);
	printf("\n");
	for(i=(sizeof(value)*8)-1;i>=0;i--)
		printf("%d",(c>>i)&1);



}

