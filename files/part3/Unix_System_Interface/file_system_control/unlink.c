/*

This program explains about unlink system call from deleting a file

Author	: Vivek Tiwari
Usage	: int unlink(const char *pathname);
	  
Version	: 1.0

*/

#include<stdio.h>
#include<fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main()
{
	unlink("hari.txt");
}
