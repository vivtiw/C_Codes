char * strcat(char * s1, register const char * s2)
	{
        	register char *s = s1;

        	while (*s++);
        	--s;
        	while ((*s++ = *s2++) != 0);
	
        	return s1;
	}
