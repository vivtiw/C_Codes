/*

This program explains how to rename a file ushing rename system call 

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
	rename("Demo.txt","hari.txt");
}
