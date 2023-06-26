
#include"bookheader.h"

void main()
{
	int n;
	int menu;
	char user[50];
	printf("              ________________________________________________________________________________");
	printf("\n\n                      %c%c%c%c%c  Hey Welcome to Firstbit Virtual Book Platform   %c%c%c%c%c",3,3,3,3,3,3,3,3,3,3);
	printf("\n              ________________________________________________________________________________");
	fflush(stdin);
	printf("\n\nPlease Enter Your Name:");
	scanf("%[^\n]s",user);
	fflush(stdin);
	printf("_______________________________________________________________________");
	printf("\n\nHello %s How can i Help u..!\n\nPress Enter Whenever Screen Stops",user);
	printf("\n_______________________________________________________________________");
	puts("\n\nEnter Numbers of Entry u want for Books here:");
	scanf("%d",&n);
	
	book *arr;
	arr= (book*)malloc((sizeof (book*)*n));
	
	printf("\n______________________________________________________________________________________");
	printf("\n\nHey %s you will get Following Features in Firstbit Virtual book Platform...",user);
	printf("\n______________________________________________________________________________________");
	do
	{
		printf("\n\nPlease Selected Below Option From Firstbit Virtual Book Platform Menu:\n%c 1.Store Data.\n%c 2.Displaying Data.\n%c 3.Search Data.\n%c 4.Update Data.\n%c 5.Delete Data.\n%c 6.Search by Price Range\n%c 7.To Add More Books.\n%c 0.To Exit.\n\nHey %s Please Enter your Choice:",16,16,16,16,16,16,16,16,user);
		scanf("%d",&menu);
	
	switch (menu)
		{
			case 1:
			storebook(arr,n);
			break;
			case 2:
			displaybook(arr,n);
			break;
			case 3:
			search(arr,n);
			break;
			case 4:
			updatebook(arr,n);
			break;
			case 5:
			deletebook(arr,&n);
			break;
			case 6:
			pricerange(arr,n);
			break;
			case 7:
			add(arr,&n);
			break;
	
		}
		printf("\n______________________________________________________________________");	
	}while(menu!=0);
		printf("\n______________________________________________________________________________________");	
		printf("\n\n%s Thank you for Using Our Firstbit Virtual Book Platform %c Visit Again %c",user,2,3);
		printf("\n______________________________________________________________________________________");	
		free(arr);
}

