char * strncpy(char *dest, register const char *src,unsigned int n)
	{
	        register char *s = dest;

        	while (n) {
        	        if ((*dest = *src) != 0) src++;
        	        ++dest;
        	        --n;
        	}
		
 		return dest;
	}
