#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book
{
	char bookname[50];
	char bookauthor[50];
	char bookpublication[50];
	char bookgenre[50];
	char booklanguage[50];
	float bookprice;
	int bookpages;
	float bookedition;
	int bookid;	
	
}book;
void storebook(book*,int);
void displaybook(book*,int);
void search(book* ,int );
void updatebook(book*,int);
void deletebook(book*,int*);
void pricerange(book*,int );			
void add(book*,int*);

