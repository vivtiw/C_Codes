int strlen(char *p)
{
	register char *s;
	for (s=p ; *s ; s++);
        return s - p;
}
