#include <stdio.h>
int main()
{
	void rem_spaces(char *str);
	char name[100]="            mohan       reddy";
	rem_spaces(name);
	printf("\n%s  %d \n",name,strlen(name));


}
void rem_spaces(char*temp)
{
	char *t;
	while(*temp){
		while(*temp==' '){
			t=temp;
			while(*t){
				*(t)=*(t+1);
				t++;
			}
		}
		while(*temp!=' ') ++temp;
		temp=temp+1;

	}
}
