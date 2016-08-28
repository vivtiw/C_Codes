#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
        int i;
        struct stat buf;
        char name[30];
	printf("\n Enter File Name: ");
	 scanf("%s",name);
	
        if(stat(name,&buf) == -1)
	{
                perror(name);
                exit(2);
        }
	printf("\n File Permissions    : %ld\n",buf.st_mode);
	printf("\n File Link Count    : %d\n",buf.st_nlink);
	printf("\n File Owners Used id : %ld\n",buf.st_uid);
	printf("\n File Group id      : %ld\n",buf.st_gid);
	printf("\n File Size 	      : %ld byters\n",buf.st_size);
	printf("\n File last access time : %ld \n",buf.st_atime);
	printf("\n File last modified time : %ld \n",buf.st_mtime);
	printf("\n File Created at time : %ld \n",buf.st_ctime);

	// Testing the Type of a File

	if(S_ISDIR(buf.st_mode)!=0)
		printf("\n Is a directory\n");
	if(S_ISCHR(buf.st_mode)!=0)
		printf("\n Is a character special file \n");
	if(S_ISBLK(buf.st_mode)!=0)
		printf("\n Is a block special file \n");
	if(S_ISREG(buf.st_mode)!=0)
		printf("\n Is a regular file \n");
	
	
}
