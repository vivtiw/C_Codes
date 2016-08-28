/*

This program explains how to define structures in unions

Author	: Vivek Tiwari
Usage	: union union_name{members list};
Version	: 1.0

*/

#include<stdio.h>

struct out_games
{
	int code;
	char name[30],ground[20];
};
struct in_games
{
	int code;
	char name[30];
};
typedef struct  
{
	int roll;
	char name[30],type_game;
	union
	{
		struct out_games ogame;
		struct in_games igame;
	}game;	
}student;

int main()
{
	int i;
	student	s[2];
	printf("\n Enter 2 Student Details \n");
	for(i=0;i<2;i++)
	{
		printf("\n Enter Roll Number : ");
		 scanf("%d",&s[i].roll);
		printf("\n Enter Student Name : ");
		 scanf(" %[^\n]",s[i].name);
		printf("\n You like to Register for Indoor Game(I) or Outdoor Game(O) : ");
		 scanf(" %c",&s[i].type_game);
		if(toupper(s[i].type_game)=='I')
		{
			printf("\n Enter Game Code : ");
			 scanf(" %d",&s[i].game.igame.code);
			printf("\n Enter Game Name : ");
			 scanf(" %[^\n]",&s[i].game.igame.name);
		}
		else
		{
			printf("\n Enter Game Code : ");
			 scanf(" %d",&s[i].game.ogame.code);
			printf("\n Enter Game Name : ");
			 scanf(" %[^\n]",&s[i].game.ogame.name);
			printf("\n Enter Ground Name : ");
			 scanf(" %[^\n]",&s[i].game.ogame.ground);
		}			
	}
	
	printf("\n Student Details \n");
	printf("\n Roll\tStudent_Name\t\tGame_Type\tGame_code\tGame_Name\tGround\n");
	printf(" -----------------\n");
	for(i=0;i<2;i++)
	{
		printf("\n%4d\t%-15s\t%c",s[i].roll,s[i].name,s[i].type_game);
		if(toupper(s[i].type_game)=='I')
			printf("\t\t%4d\t\t%-20s",s[i].game.igame.code,s[i].game.igame.name);
		else
			printf("\t\t%4d\t%-15s\t\t%-15s",s[i].game.ogame.code,s[i].game.ogame.name 
			,s[i].game.ogame.ground);
	}		
	printf("\n");
}
