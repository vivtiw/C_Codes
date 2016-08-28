int n=20;
void ins(int *b,int *f,int *r,int val);
main()
{
	int a[20]={},i;
	int f,r;
	f=r=-1;
	ins(a,&f,&r,10);
	ins(a,&f,&r,20);
	ins(a,&f,&r,30);
	ins(a,&f,&r,40);
	ins(a,&f,&r,50);
	for(i=f;i<=r;i++){
		printf(" %d",a[i]);
	}
}
void ins(int *b,int *f,int *r,int val)
{
	if(*r==n-1){
		printf("Queue Full");
	}else{
		printf("\n***%d***",*r);

		(*r)++;
		printf("\n%d\n",*r);
		b[*r]=val;
		if(*f=-1)
			*f=0;
	}

	
}

