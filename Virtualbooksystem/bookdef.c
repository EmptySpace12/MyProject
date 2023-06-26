
#include"bookheader.h"

//..................................Store..........................................//


void storebook(book* arr,int n)
{
		int i,flag=0;
		printf("\n_________________________________________________________________________________");	
		puts("\n\nHey this is Storing Section of Firstbit Virtual Book Platform");
		printf("\n_________________________________________________________________________________");	
		puts("\n                       <<<<<<<<<<< Hey Answer The Below Question >>>>>>>>>>>>  ");
			for(i=0;i<n;i++)
				{
					flag=1;
					arr[i].bookid=i+1;
					puts("\n.................................................................................");
					printf("                               For Book %d              ",i+1);
					puts("\n.................................................................................");
					printf("\nYour id Number of book %d              :%d",i+1,arr[i].bookid);	
					fflush(stdin);
					printf("\nEnter Name of The Book %d              :",i+1);	
					scanf("%[^\n]s",&arr[i].bookname);	
					fflush(stdin);
					printf("Enter Name of Author for book %d       :",i+1);	
					scanf("%[^\n]s",&arr[i].bookauthor);	
					fflush(stdin);
					printf("Enter Name of Publication for book %d  :",i+1);	
					scanf("%[^\n]s",&arr[i].bookpublication);	
					fflush(stdin);
					printf("Enter Genre of book %d                 :",i+1);	
					scanf("%[^\n]s",&arr[i].bookgenre);	
					fflush(stdin);				
					printf("Enter Language of book %d              :",i+1);	
					scanf("%[^\n]s",&arr[i].booklanguage);	
					fflush(stdin);
					printf("Enter Pages of book %d                 :",i+1);	
					scanf("%d",&arr[i].bookpages);	
					fflush(stdin);
					printf("Enter Price  of book %d                :",i+1);	
					scanf("%f",&arr[i].bookprice);
					fflush(stdin);
					printf("Enter Edition  of book %d              :",i+1);	
					scanf("%f",&arr[i].bookedition);
					fflush(stdin);
					
				}
					if(flag==1)
					{
						puts("\n______________________________________________________");
						puts("\n\nYour Data is Sucessfully Stored");
						puts("\n______________________________________________________");
					}
					else
					{
					puts("\n______________________________________________________");
					puts("\n\nOpps...!Sorry for Technical issue..");
					puts("\n______________________________________________________");
					
					}


}

//..................................Display..........................................//



void displaybook(book* arr,int n)
{
		int i,flag=0;
		printf("\n______________________________________________________________________");	
		puts("\n\nHey this is Display Section of Firstbit Virtual Book Platform");
		printf("\n______________________________________________________________________");	
						
			printf("\n+..............................................................................................................................................+");	
	printf("\n|Id\t|Book Name\t     |Author Name\t  |Publication\t       |Genre\t\t    |Language\t         | Pageno.  |Price   |Edition  |");
	printf("\n+..............................................................................................................................................+");	
					
				for(i=0;i<n;i++)
				{
					flag=1;
					printf("\n| %-3d",arr[i].bookid);
					printf("\t|%-20s|",arr[i].bookname); 
					printf("%-20s|",arr[i].bookauthor);
					printf("%-20s|",arr[i].bookpublication);
					printf("%-20s|",arr[i].bookgenre);
					printf("% -20s|",arr[i].booklanguage);
					printf("% -6d    |",arr[i].bookpages);
					printf("%-6.2f  |",arr[i].bookprice);
					printf("%-6.2f   |",arr[i].bookedition);
					printf("\n+..............................................................................................................................................+");	


					fflush(stdin);
						
				}

					if(flag==1)
					{
					puts("\n______________________________________________________");
					puts("\n\nYour Data is Sucessfully Displayed");
					puts("\n______________________________________________________");
					}
					else
					{
					puts("\n______________________________________________________");
					puts("\n\nOpps...!Sorry for Technical issue..");
					puts("\n______________________________________________________");
					}
}

//..................................Search..........................................//


void search(book* arr,int n)

{
		int i=0,flag=0;
		int choicenum=0;
		printf("\n______________________________________________________________________");	
		puts("\n\nHey this is Searching Section of Firstbit Virtual Book Platform");
		printf("\n______________________________________________________________________");	
		puts("\n.............................................................................");					
		puts("Choose what u want to Search by:\n1.Id\n2.Name\n3.Author\n4.Language");
		scanf("%d",&choicenum);
		fflush(stdin);
		switch (choicenum)
		{
		
		case 1 : 
		{
			int id;
			printf("\n______________________________________________________________________");	
			puts("\n\nHey this is Searching by Id Section of Firstbit Virtual Book Platform");
			printf("\n______________________________________________________________________");	
		
			puts("\n........................................................................");					
			puts("\nEnter The id Number of the Book u want to Search:");
			scanf("%d",&id);
			for(i=0;i<n;i++)
			{
			
				if(	id==arr[i].bookid)
					{
						flag=1;
						puts("........................................................................");					
						printf("                       Searched Book details ");
						puts("\n........................................................................");					
						puts("\n+........................................+");
						printf("|                  Book %d                |",i+1);
						puts("\n+........................................+");
						printf("  Id Number         |  %d              ",arr[i].bookid);
						printf("\n  Name              |  %s              ",arr[i].bookname);	
						printf("\n  Author Name       |  %s              ",arr[i].bookauthor);	
						printf("\n  Publication Name  |  %s              ",arr[i].bookpublication);	
						printf("\n  Genre(type)       |  %s              ",arr[i].bookgenre);	
						printf("\n  Language          |  %s              ",arr[i].booklanguage);	
						printf("\n  Page Number       |  %d              ",arr[i].bookpages);	
						printf("\n  Price             |  %.2f/-Only      ",arr[i].bookprice);
						printf("\n  Edition Number    |  %.2f            ",arr[i].bookedition);
						printf("\n ............................................................");
						
						break;
					}
			}
			if(flag==1)
			{
				puts("\n______________________________________________________");
				puts("\n\nData founded Your Search was Successfull");
				puts("\n______________________________________________________");
						
			}
			else
			{
			puts("\n|______________________________________________________|");
			puts("\n\nId not Founded Please Check ur id Again");
			puts("\n|______________________________________________________|");
					
			}
			break;
			
		}
		
	
	
		case 2 : 
		{
			char name[100];
			printf("\n______________________________________________________________________");	
			puts("\n\nHey this is Searching by Name Section of Firstbit Virtual Book Platform");
			printf("\n______________________________________________________________________");	
		
			puts("\n........................................................................");					
			puts("\nEnter The Name of the Book u want to Search:");
			gets(&name);
			fflush(stdin);
			
			for(i=0;i<n;i++)
			{
				//int b;
				//	b=strcmp(name,arr[i].bookname);
				if(strcasecmp(name,arr[i].bookname)==0)
					
				{
			
						flag=1;
						puts(".........................................................................");					
						printf("\n                    Book details Are");
						puts("\n........................................................................");					
						puts("\n+........................................+");
						printf("|                  Book %d                |",i+1);
						puts("\n+........................................+");
						printf("  Id Number         |  %d              ",arr[i].bookid);
						printf("\n  Name              |  %s              ",arr[i].bookname);	
						printf("\n  Author Name       |  %s              ",arr[i].bookauthor);	
						printf("\n  Publication Name  |  %s              ",arr[i].bookpublication);	
						printf("\n  Genre(type)       |  %s              ",arr[i].bookgenre);	
						printf("\n  Language          |  %s              ",arr[i].booklanguage);	
						printf("\n  Page Number       |  %d              ",arr[i].bookpages);	
						printf("\n  Price             |  %.2f/-Only      ",arr[i].bookprice);
						printf("\n  Edition Number    |  %.2f            ",arr[i].bookedition);
						printf("\n ......................................................................");
						
				
					}
					
			}
			if(flag==1)
			{
				puts("\n______________________________________________________");
				puts("\n\nData founded Your Search was Successfull");
				puts("\n______________________________________________________");
					
			}
			else
			{	
					puts("\n|______________________________________________________|");
					puts("\n\nName not Founded Please Check your Inputs Again");
					puts("\n|______________________________________________________|");
					
					break;
			}
		
			break;
		}
	
	
	
		case 3 : 
		{
			char author[100];
			printf("\n________________________________________________________________________");	
			puts("\n\nHey this is Searching by author Section of Firstbit Virtual Book Platform");
			printf("\n________________________________________________________________________");	
			
			puts("\n........................................................................");					
			puts("\nEnter The Author Name of the Book u want to Search:");
			gets(&author);
			fflush(stdin);
			for(i=0;i<n;i++)
			{
			
				if(strcasecmp(author,arr[i].bookauthor)==0)
					
				{
			
						flag=1;
						puts("........................................................................");					
						printf("\n                     Book details Are");
						puts("\n........................................................................");					
						puts("\n+........................................+");
						printf("|                  Book %d                |",i+1);
						puts("\n+........................................+");
						printf("  Id Number         |  %d              ",arr[i].bookid);
						printf("\n  Name              |  %s              ",arr[i].bookname);	
						printf("\n  Author Name       |  %s              ",arr[i].bookauthor);	
						printf("\n  Publication Name  |  %s              ",arr[i].bookpublication);	
						printf("\n  Genre(type)       |  %s              ",arr[i].bookgenre);	
						printf("\n  Language          |  %s              ",arr[i].booklanguage);	
						printf("\n  Page Number       |  %d              ",arr[i].bookpages);	
						printf("\n  Price             |  %.2f/-Only      ",arr[i].bookprice);
						printf("\n  Edition Number    |  %.2f            ",arr[i].bookedition);
						printf("\n ............................................................");
						
					
				}
					
			}
			if(flag==1)
			{
				puts("\n______________________________________________________");
				puts("\n\nSearched Successfull");
				puts("\n______________________________________________________");
					
			}
			else
			{	
			puts("\n_______________________________________________________________");
			puts("\n\nAuthor Name not Founded Please Check your Value u enterd again");
			puts("\n_______________________________________________________________");
			}
		
			break;
		}


	
		case 4:
		{
			char language[100];
			printf("\n__________________________________________________________________________");	
			puts("\n\nHey this is Searching by Language Section of Firstbit Virtual Book Platform");
			printf("\n__________________________________________________________________________");	
			
			puts("\n........................................................................");					
			puts("\nEnter The Language of the Book u want to Search:");
			gets(&language);
			fflush(stdin);
			for(i=0;i<n;i++)
			{
			
				if(strcasecmp(language,arr[i].booklanguage)==0)
					
				{
			
						flag=1;
						puts("........................................................................");					
						printf("\n                        Book details Are");
						puts("\n........................................................................");					
						puts("\n+........................................+");
						printf("|                  Book %d                |",i+1);
						puts("\n+........................................+");
						printf("  Id Number         |  %d              ",arr[i].bookid);
						printf("\n  Name              |  %s              ",arr[i].bookname);	
						printf("\n  Author Name       |  %s              ",arr[i].bookauthor);	
						printf("\n  Publication Name  |  %s              ",arr[i].bookpublication);	
						printf("\n  Genre(type)       |  %s              ",arr[i].bookgenre);	
						printf("\n  Language          |  %s              ",arr[i].booklanguage);	
						printf("\n  Page Number       |  %d              ",arr[i].bookpages);	
						printf("\n  Price             |  %.2f/-Only      ",arr[i].bookprice);
						printf("\n  Edition Number    |  %.2f            ",arr[i].bookedition);
						printf("\n ...............................................................");
						
				
				}
					
			}
			if(flag==1)
			{
				puts("\n______________________________________________________");
				puts("\n\nSearched Successfull");
				puts("\n______________________________________________________");
					
			}
			else
			{	
			puts("\n|___________________________________________________________________|");
			puts("\n\nThis Language not Founded Please Check your Value u enterd again");
			puts("\n|___________________________________________________________________|");
					
			break;
			}
		
			break;
		}
	


	
	}
}

//..................................Update..........................................//



void updatebook(book* arr,int n)
{
	int update,i,flag=0;
	printf("\n______________________________________________________________________");	
	puts("\n\nHey this is Updating Section of Firstbit Virtual Book Platform");
	printf("\n______________________________________________________________________");	
	
	puts("\n\nFor Updating Information of Book Select Below Option Which you know about Book:");						
	puts("1.Id.\n2.Name.");
	scanf("%d",&update);
	
		
				if(update==1)
				{
						int id;
						int up;
						printf("\n_____________________________________________________________________");	
						puts("\n\nYou have Selected Updating by Id Section of Firstbit Virtual Book Platform");
						printf("\n_____________________________________________________________________");	
						
						puts("\nEnter The id Number of the Book u want to Update:");
						scanf("%d",&id);
						puts("........................................................................");						
						do
						{
						fflush(stdin);
						puts("\nWhich Data in Particular You Want to Update:\n1.Name\n2.Author\n3.Language\n4.Genre\n5.Price\n6.Pages\n7.Edition\n8.Publication\n0.To Exit");
						scanf("%d",&up);
												
						for(i=0;i<n;i++)
						{
			
							if(id==arr[i].bookid)
							{
							
								
								
								switch(up)
								{
									case 1:
										{
											flag=1;
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Book Name:");
											scanf("%[^\n]s",&arr[i].bookname);
											fflush(stdin);
											printf("\nYour New Book Name is %s",arr[i].bookname);
											printf("\n____________________________________________");
											fflush(stdin);
											break;
										}		
									case 2:
										{
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Book Author Name:");
											scanf("%[^\n]s",&arr[i].bookauthor);
											fflush(stdin);
											printf("\nYour New Book Author Name is %s",arr[i].bookauthor);
											printf("\n____________________________________________");
											break;
										}		
									case 3:
										{
										
											fflush(stdin);
											printf("\n______________________________________________________");
											printf("\nEnter New Language u want to Update for This Book:");
											scanf("%[^\n]s",&arr[i].booklanguage);
											fflush(stdin);
											printf("\nYour New Language of the Book is %s",arr[i].booklanguage);
											printf("\n______________________________________________________");
											break;
										}		

									case 4:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Genre u want to Update for This Book:");
											scanf("%[^\n]s",&arr[i].bookgenre);
											fflush(stdin);
											printf("\nYour Changed Genre of the Book  is %s",arr[i].bookgenre);
											printf("\n____________________________________________");
											
											break;
										}
									case 5:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Price u want to Update for This Book:");
											scanf("%f",&arr[i].bookprice);
											fflush(stdin);
											printf("\nYour Changed Price of the Book  is %.2f Rupees/-",arr[i].bookprice);
											printf("\n____________________________________________");
											break;
										}
									case 6:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Page Number u want to Update for This Book:");
											scanf("%d",&arr[i].bookpages);
											fflush(stdin);
											printf("\nYour Changed Page Number of the Book  is %d",arr[i].bookprice);
											printf("\n____________________________________________");
											break;
										}
									case 7:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Edition Number u want to Update for This Book:");
											scanf("%f",&arr[i].bookedition);
											fflush(stdin);
											printf("\nYour Changed Edition Number of the Book  is %.2f",arr[i].bookedition);
											printf("\n____________________________________________");
											break;
										}
									case 8:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Genre u want to Update for This Book:");
											scanf("%[^\n]s",&arr[i].bookpublication);
											fflush(stdin);
											printf("\nYour Changed Genre of the Book  is %s",arr[i].bookpublication);
											printf("\n____________________________________________");
											break;
										}
										
												
								}
							}
						
						}
							if(flag==1)
							{
							puts("\n_______________________________________________________________________");
							puts("\n\nHey..! Yours Updation Process Was Succesfully Completed");	
							puts("\nDo You Want To Update  Anything Else Than Select Below Options...");	
							puts("\n________________________________________________________________________");
							
							}
							else
							{
								puts("\n________________________________________________________");
								puts("\n\nOops..! Please check ur Values Again");
								puts("\n________________________________________________________");
						
							}
						}while(up!=0);
						
						
					}
					


			if(update==2) 
					{
						char bname[100];
						printf("\n______________________________________________________________________");	
						puts("\n\nHey You have selected Updating by Name Section of \nFirstbit Virtual Book Platform");
						printf("\n______________________________________________________________________");	
						
						puts("\n........................................................................");					
						fflush(stdin);	
						
						puts("\nEnter The Name of the Book u want to Search:");
						scanf("%[^\n]s",&bname);
						fflush(stdin);	
						puts("\n........................................................................");						
						int up;
						do
						{
						
						puts("\nWhat u want to update in particular:\n1.Id\n2.Name\n3.Author\n4.Language\n5.Genre\n6.Price\n7.Pages\n8.Edition\n9.Publication\n0.To Exit");
						scanf("%d",&up);
								
						for(i=0;i<n;i++)
						{
			
							if(strcasecmp(bname,arr[i].bookname)==0)
							{
							
								flag=1;
								switch(up)
								{
									case 1:
										{
											flag=1;
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Book Name:");
											scanf("%[^\n]s",&arr[i].bookname);
											fflush(stdin);
											printf("\nYour New Book Name is %s",arr[i].bookname);
											printf("\n____________________________________________");
											fflush(stdin);
											break;
										}		
									case 2:
										{
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Book Author Name:");
											scanf("%[^\n]s",&arr[i].bookauthor);
											fflush(stdin);
											printf("\nYour New Book Author Name is %s",arr[i].bookauthor);
											printf("\n____________________________________________");
											break;
										}		
									case 3:
										{
										
											fflush(stdin);
											printf("\n______________________________________________________");
											printf("\nEnter New Language u want to Update for This Book:");
											scanf("%[^\n]s",&arr[i].booklanguage);
											fflush(stdin);
											printf("\nYour New Language of the Book is %s",arr[i].booklanguage);
											printf("\n______________________________________________________");
											break;
										}		

									case 4:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Genre u want to Update for This Book:");
											scanf("%[^\n]s",&arr[i].bookgenre);
											fflush(stdin);
											printf("\nYour Changed Genre of the Book  is %s",arr[i].bookgenre);
											printf("\n____________________________________________");
											
											break;
										}
									case 5:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Price u want to Update for This Book:");
											scanf("%f",&arr[i].bookprice);
											fflush(stdin);
											printf("\nYour Changed Price of the Book  is %.2f Rupees/-",arr[i].bookprice);
											printf("\n____________________________________________");
											break;
										}
									case 6:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Page Number u want to Update for This Book:");
											scanf("%d",&arr[i].bookpages);
											fflush(stdin);
											printf("\nYour Changed Page Number of the Book  is %d",arr[i].bookprice);
											printf("\n____________________________________________");
											break;
										}
									case 7:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Edition Number u want to Update for This Book:");
											scanf("%f",&arr[i].bookedition);
											fflush(stdin);
											printf("\nYour Changed Edition Number of the Book  is %.2f",arr[i].bookedition);
											printf("\n____________________________________________");
											break;
										}
									case 8:
										{
										
											fflush(stdin);
											printf("\n____________________________________________");
											printf("\nEnter New Genre u want to Update for This Book:");
											scanf("%[^\n]s",&arr[i].bookpublication);
											fflush(stdin);
											printf("\nYour Changed Genre of the Book  is %s",arr[i].bookpublication);
											printf("\n____________________________________________");
											break;
										}
										
												
								}	
							}
						}
							if(flag==1)
							{
							puts("\n_______________________________________________________________________");
							puts("\n\nHey..! Yours Updation Process Was Succesfully Completed");	
							puts("\nDo You Want To Update  Anything Else Than Select Below Options...");	
							puts("\n________________________________________________________________________");
							
							}
							else
							{
								puts("\n________________________________________________________");
								puts("\n\nOops..! Please check ur Values Again");
								puts("\n________________________________________________________");
						
							}
					}while(up!=0);
				
					}
					
	
	
	
}

//..................................Delete..........................................//



void deletebook(book* arr,int* n)
{
			int i,j,deleteid,flag=0;
			printf("\n______________________________________________________________________");	
			puts("\n\nHey this is Deleting Section of Firstbit Virtual Book Platform");
			printf("\n______________________________________________________________________");	
			
			puts("\nEnter The Id number of the book you want to Delete:");
			scanf("%d",&deleteid);
			for(i=0;i<*n;i++)
			{
				if(deleteid==arr[i].bookid)
				{
					flag=1;
				
				for(j=i;j<*n-1;j++)
				{
				arr[j]=arr[j+1];
				}
			}
			}
			if(flag==1)
			{
				*n=*n-1;
				puts("\n________________________________________________________");
				printf("\n\nHey Deleting Processs is Successfully Completed");
				puts("\n________________________________________________________");
			}
			else
			{
			puts("\n________________________________________________________");
			puts("\n\nOops..! Please check ur Values Again");
			puts("\n________________________________________________________");
				
			}
											
																									
}

//..................................Pricerange..........................................//



void pricerange(book* arr,int n)
{
			int i,low,high,flag=0;
			printf("\n______________________________________________________________________");	
			puts("\n\nHey this is Filter By Price Section of Firstbit Virtual Book Platform");
			printf("\n______________________________________________________________________");	
			puts("\nEnter lowest Price For Range  :");
			scanf("%d",&low);
			puts("\nEnter Highest Price For Range :");
			scanf("%d",&high);
			printf("\nYour Lowest Range   :%d",low);
			printf("\nYour Highest Range  :%d",high);
			
			for(i=0;i<n;i++)
			{
				if(low<=arr[i].bookprice && arr[i].bookprice<=high)
				{
					flag=1;
								printf("\n__________________________________________");
								printf("\n|    Description    |     Details        |");
								printf("\n|___________________|____________________|");
								printf("\n|                  Book %d                |",i+1);
								printf("\n|________________________________________|");
								printf("\n|  Id Number        |  %d                 |",arr[i].bookid);
								printf("\n  Name              |  %s              ",arr[i].bookname);	
								printf("\n  Author Name       |  %s              ",arr[i].bookauthor);	
								printf("\n  Publication Name  |  %s              ",arr[i].bookpublication);	
								printf("\n  Genre(type)       |  %s              ",arr[i].bookgenre);	
								printf("\n  Language          |  %s              ",arr[i].booklanguage);	
								printf("\n  Page Number       |  %d                  ",arr[i].bookpages);	
								printf("\n  Price             |  %.2f/-Only         ",arr[i].bookprice);
								printf("\n|  Edition Number   |  %.2f              |",arr[i].bookedition);
								puts("\n|________________________________________|");
								
								fflush(stdin);
						
						
					
				}
			}
						if(flag==1)
							{
								puts("\n________________________________________________________");
								puts("\n\nAbove List of book is present In your Enterd Price Range");
								puts("\n_________________________________________________________");
							}
						else
							{
							puts("\n______________________________________________________");
							puts("\n\nOpps...!Please Check Your Entered Values");
							puts("\n______________________________________________________");
							
							}
		
}

//..................................add..........................................//




void add(book* arr,int *n)
{
			int add,i,flag=0;
			printf("\n______________________________________________________________________");	
			puts("\n\nHey this is Adding Section of Book to Firstbit Virtual Book Platform");
			printf("\n______________________________________________________________________");	
			puts("\nEnter The Number of Book want to Add:");
			scanf("%d",&add);
			
			for(i=*n;i<*n+add;i++)
				{
					flag=1;
					arr[i].bookid=i+1;
					puts("\n........................................................................");
					printf("\nYour id Number of book %d              :%d",i+1,arr[i].bookid);	
					fflush(stdin);
					printf("\nEnter Name of The Book %d              :",i+1);	
					scanf("%[^\n]s",&arr[i].bookname);	
					fflush(stdin);
					printf("Enter Name of Author for book %d       :",i+1);	
					scanf("%[^\n]s",&arr[i].bookauthor);	
					fflush(stdin);
					printf("Enter Name of Publication for book %d  :",i+1);	
					scanf("%[^\n]s",&arr[i].bookpublication);	
					fflush(stdin);
					printf("Enter Genre of book %d                 :",i+1);	
					scanf("%[^\n]s",&arr[i].bookgenre);	
					fflush(stdin);				
					printf("Enter Language of book %d              :",i+1);	
					scanf("%[^\n]s",&arr[i].booklanguage);	
					fflush(stdin);
					printf("Enter Pages of book %d                 :",i+1);	
					scanf("%d",&arr[i].bookpages);	
					fflush(stdin);
					printf("Enter Price  of book %d                :",i+1);	
					scanf("%f",&arr[i].bookprice);
					fflush(stdin);
					printf("Enter Edition  of book %d              :",i+1);	
					scanf("%f",&arr[i].bookedition);
					fflush(stdin);
					
				}
				*n=*n+add;
					if(flag==1)
					{
						puts("\n______________________________________________________");
						puts("\n\nYour Data is Sucessfully Stored");
						puts("\n______________________________________________________");
					}
					else
					{
					puts("\n______________________________________________________");
					puts("\n\nOpps...!Sorry for Technical issue..");
					puts("\n______________________________________________________");
					
					}

}

