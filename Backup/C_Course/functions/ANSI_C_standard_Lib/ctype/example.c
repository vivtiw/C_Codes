#include <stdio.h>
#include <ctype.h>
#include <assert.h>	
int main()
{
	char a='1',b='a';
		// Usage of isalnum()
	{
		assert(isalnum(a));
			printf("\n %c \n",a);
		assert(isalnum(b));
			printf("\n %c \n",b);
	}
	
		// Usage of isalpha()
	{
//			assert(isalpha(a));
//			printf("\n %c \n",a);
		assert(isalpha(b));
			printf("\n %c \n",b);
	}

		// Usage of iscntrl();
	{
		char a=0x1F;	// a is control character or non printing character
		char b=65;	// b is printable character
		assert(iscntrl(a));
			printf("\n a is non printable character\n");

//		assert(iscntrl(b));
			printf("\n b is printable character");
					
	}
	
	// Usage of toupper
		printf("\n %c \n",toupper('a'));
	// Usage of tolower
		printf("\n %c \n",tolower('A'));
}

