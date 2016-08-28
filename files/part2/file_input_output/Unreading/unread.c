#include <stdio.h>
#include <ctype.h>

int main()
{
  int c,i=0;
  char str[20];
  do
  {
    /* No need to check for EOF because it is not
       isspace, and ungetc ignores EOF.  */
    c = getc (stdin);
    if(isspace(c))
    {
  	ungetc ('.', stdin);
  	str[i++]=getc(stdin);
	str[i]='\0';
	break; 
    }
    str[i++]=c;	
    if(c==EOF)
	break;
  }
  while (1);
  printf("\n %s- \n",str);
}
