void copy(void *d,void *s,int bytes)
	{
		register char *d1 = d;
	        register const char *s1 = s;

	        while (n) {
	                *s1++ = *d1++;
	                --n;
		}
        }
