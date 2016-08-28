#include <stdio.h>
#define SENT "   Hello I   am Here"

int reverse(char *string, char delimiter)
{
	char *src, *dest, *temp = string;
	while (*temp) {
		if (*temp == delimiter) {
			temp++;
			continue;
		}
		src = dest = temp;
		while ((*(dest + 1) != delimiter) && (*(dest + 1) != '\0'))
			dest++;
		temp = dest + 1;
		while (dest > src) {
			char temp = *dest;
			*dest-- = *src;
			*src++ = temp;
		}
	}
}


int main()
{
	char name[] = SENT;
	printf("Before Call: %s\n", name);
	reverse(name, '\0');	/* Reverse Complete Sentence */
	reverse(name, ' ');	/* Reverse Words */
	printf("After Call: %s\n", name);

}
