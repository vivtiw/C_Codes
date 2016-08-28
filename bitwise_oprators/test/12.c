#include<stdio.h>
void abc(char **p)
{
	char *t;
	printf("\n %u \n",p);
	t = (p+=sizeof(int))[-1];
	printf("\n %s \n",t);

}
main()
{
	char *argv []= {"ab","cd","ye","dg","js","lt"};
	char * t = argv;
	
	printf("\n argv[0] %u \n",argv[0]);
	printf("\n argv[1] %u \n",argv[1]);
	printf("\n argv[2] %u \n",argv[2]);
	printf("\n argv[3] %u \n",argv[3]);
	printf("\n argv[4] %u \n",argv[4]);
	printf("\n argv[5] %u \n",argv[5]);
	abc(argv);
/*	printf("\n\n%c \n",t);
	printf("\n%c \n",*(t+1));
	printf("\n%c \n",*(t+2));
	printf("\n%c \n",*(t+3));
	printf("\n%c \n",*(t+4));*/
}

