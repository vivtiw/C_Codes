#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct ipaddr
{
	char *name;
	int ipaddr[3];
	int portno;
};

main()
{
	int i;
	char str1[]="host;192.168.1.22:8000";
	struct ipaddr *ptr;
	char *ip,*s,*p;
	ptr=(struct ipaddr *)malloc(sizeof(struct ipaddr));
	ptr->name =strtok(str1,";:");
	ip=strtok(NULL,";:");
	p=strtok(NULL,"::");
	s=strtok(ip,".");
	ptr->ipaddr[0]=strtol(s,NULL,NULL);	
	s=strtok(NULL,".");
	ptr->ipaddr[1]=strtol(s,NULL,NULL);
	s=strtok(NULL,".");
        ptr->ipaddr[2]=strtol(s,NULL,NULL);
	s=strtok(NULL,".");
	ptr->ipaddr[3]=strtol(s,NULL,NULL);
	printf("\n host name is   %s  \n",ptr->name);
	printf("\n host ipaddr is  %d %d %d %d\n",ptr->ipaddr[0],ptr->ipaddr[1],ptr->ipaddr[2],ptr->ipaddr[3]);
	ptr->portno=strtol(p,NULL,NULL);
	printf("\n portno is  %d\n",ptr->portno);
}
/*main()
{
	char str1[]="server;192.168.1.1:9000";
	struct ipaddr *ptr;
	char *ip;
	ptr=(struct ipaddr *)malloc(sizeof(struct ipaddr));
	ptr->name=strtok(str1,";:");
	printf("\n host name is   %s  \n",ptr->name);
	ip=strtok(NULL,";:");
	printf("\n host ipaddr is %s \n",ip);
	ptr->ipaddr=strtol(ip,NULL,NULL);
	printf("\n host ipaddr is  %d \n",ptr->ipaddr);
}*/

