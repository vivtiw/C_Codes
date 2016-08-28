#include <stdio.h>
int main()
{
	char result[100];
	getdelim(result,"-",stdin);
	printf("\n %s ",result);
	
	
	
}
