char * strchr(register const char *str, char ch)
	{
		do {
			if (*str == ch) 
	                        return (char *) str;   
        	} while (*str++);
	
	        return NULL;
	}
