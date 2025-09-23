//5. Movie Database: Create a program that uses structures to manage a movie
//database with details like title, director, release year, and genre. Allow users
//to add, search for, and update movie records.
#include<stdio.h>
#include<stdio.h>
typedef struct Movie
{
	char title[30];
	char director[30];
	int year;
	char genre[20];
}Movie;
void update(); 
void search() ;
void display(Movie m);
void store(Movie * temp);
void main()
{
	Movie m1;
	display(m1);
	store(&m1);
	search();
    update() ;
    
    
    
    
    int choice,arr[10];

    while (1) {
        printf("\n===== Employee Menu =====\n");
        printf("1. Add Movie\n");
        printf("2. Display Movie\n");
        printf("3. Search Movie\n");
        printf("4. Update Employee\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            store();
        }
        else if(choice==2)
        {
        	for(int i=0;i<10;i++)
        	{
        	display(arr[10]);
            }
		}
		else if(choice==3)
		{
			search();
		}
		else if(choice==4)
		{
			update();
		}  
    
}
void display(Movie m)
{
	Movie arr[10];
	for(int i=0;i<10;i++)
	{
    	printf("Movie title = %s\n",m.title);
	    printf(" Movie director = %s\n" ,m.director);
	    printf("release year = %d\n",m.year);
    	printf(" Movie genre = %s\n",m.genre);
   }
}
void store(Movie * temp)
   {
   	     Movie arr[10];
	    for(int i=0;i<10;i++)
    	{
			printf("enter movie title , director , year , genre\n");
	        scanf("%s",temp->title);
	        scanf("%s",temp->director);
	        scanf("%d",temp->year);
	        scanf("%d",temp->genre);
	    }
    }
void search(char*mv) 
   {
	    Movie arr[5];
        printf("enter the movie title");
          int title;
          scanf("%d",&title);
          int num,n=10;
          int found =-1;
	    for(int i=0; i<n;i++)
	        {
			    if  (strcmp(arr[i].title,mv)==0)
			    {
			        found = i;
			         break;	
			    }
		    }
		        	if(found!=-1)
			          {
			        	printf("%s found at index %d found ",arr[found].title,found);
		            	}
			           else
					   {
		   	                printf("not found");
		   	            }
    }
void update(Movie *m) 
{
	Movie arr[10];
    int title, found = 0;
    printf("Enter ID to update: ");
    scanf("%d", &title);

    for (int i = 0; i < 5; i++) 
	{
        if(strcmp(arr[i].title,m)==0) 
		{
          
		    printf("Enter new title: ");
            scanf("%s", m->title);
           
		    printf("Enter new Director: ");
            scanf("%s", m->director);
           
		    printf("Enter new year: ");
            scanf("%d",&m->director);
           
		    printf("enter new genre: ");
            scanf("%s",&m->genre);
           
		    printf("Employee updated.\n");
            found = 1;
            break;
        }
    }
    if (!found) 
	{
	    printf("Employee not found.\n");
    }
}
 	        