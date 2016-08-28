#include <stdio.h>
int main()
{
	char str[100]="mohan reddy";
	void rever(char *str,char del);
	printf("%s",str);
	rever(str,'\0');
	rever(str,' ');
	printf("\n%s",str);
}
void rever(char *str,char del)
{
	char *temp=str,*src,*dest;
	while(*temp){
		if(*temp==del){
			temp++;
			continue;
		}
		src=dest=temp;
		while((*(dest+1)!=del) && (*(dest+1)!='\0'))
			dest++;
		temp=dest+1;
		while(src<dest){
			char t=*src;
			*(src++)=*(dest);
			*(dest--)=t;
		}
	}
}




