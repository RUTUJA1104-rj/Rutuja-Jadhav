#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book
{
    int B_id;
    char B_title[50];
    char B_author[50];
    char B_category[50];
    double B_price;
    char B_rating[20];
} Book;
	Book *books = NULL;
     int count = 0;
     int capacity = 0;
     
     
void addBook();
void  removeBook();
void  searchBook();
void showAuthorBooks();
void  showCategoryBooks();
void updateBook();
void displaySortedBooks();
void displayAllBooks();
void  displayTopBooks();
int main()
 {
    int choice;
    while (1) 
	{
        printf("\n--- Book Management Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book Data\n");
        printf("7. Display Sorted Books\n");
        printf("8. Display All Books\n");
        printf("9. Display Top 3 Books\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            addBook();
        else if (choice == 2)
            removeBook();
        else if (choice == 3)
            searchBook();
        else if (choice == 4)
            showAuthorBooks();
        else if (choice == 5)
            showCategoryBooks();
        else if (choice == 6)
            updateBook();
        else if (choice == 7)
            displaySortedBooks();
        else if (choice == 8)
            displayAllBooks();
        else if (choice == 9)
            displayTopBooks();
        else if (choice == 0) 
		{
            free(books);
            printf("Exiting system!\n");
            break;
        } else
            printf("Invalid choice. Try again.\n");
    }
    return 0;
}
void addBook() 
{
    if (count == capacity)
	 {
        books = (Book *)realloc(books, capacity * sizeof(Book));
        if (!books)
		 {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[count].B_id);
    printf("Enter Title: ");
    scanf(" %s", books[count].B_title);
    printf("Enter Author: ");
    scanf(" %s", books[count].B_author);
    printf("Enter Category: ");
    scanf(" %s", books[count].B_category);
    printf("Enter Price: ");
    scanf("%lf", &books[count].B_price);
    printf("Enter Rating: ");
    scanf(" %s", books[count].B_rating);

    count++;
    printf("Book added successfully!\n");
}

void displayAllBooks() 
{
    if (count == 0) 
	{
        printf("No books available.\n");
        return;
    }
    for (int i = 0; i < count; i++)
	 {
        printf("\nBook %d:\n", i + 1);
        printf("ID: %d\nTitle: %s\nAuthor: %s\nCategory: %s\nPrice: %.2lf\nRating: %s\n",
               books[i].B_id, books[i].B_title, books[i].B_author, books[i].B_category,
               books[i].B_price, books[i].B_rating);
    }
}


void searchBook()
 {
    char title[50];
    printf("Enter Book Title to search: ");
    scanf(" %s", title);
    for (int i = 0; i < count; i++)
	 {
        if (strcmp(books[i].B_title, title) == 0) 
		{
            printf("Book Found:\nID: %d\nAuthor: %s\nCategory: %s\nPrice: %.2lf\nRating: %s\n",
                   books[i].B_id, books[i].B_author, books[i].B_category,
                   books[i].B_price, books[i].B_rating);
            return;
        }
    }
    printf("Book not found.\n");
}

void removeBook()
 {
    char title[50];
    printf("Enter Book Title to remove: ");
    scanf(" %s", title);
    for (int i = 0; i < count; i++)
	 {
        if (strcmp(books[i].B_title, title) == 0) 
		{
            for (int j = i; j < count - 1; j++) 
			{
                books[j] = books[j + 1];
            }
            count--;
            printf("Book removed successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void updateBook() 
{
    char title[50];
    printf("Enter Book Title to update: ");
    scanf(" %s", title);
    for (int i = 0; i < count; i++) 
	{
        if (strcmp(books[i].B_title, title) == 0) 
		{
            printf("Enter new Price: ");
            scanf("%lf", &books[i].B_price);
            printf("Enter new Rating: ");
            scanf(" %s", books[i].B_rating);
            printf("Book updated successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void showAuthorBooks()
 {
    char author[50];
    printf("Enter Author Name: ");
    scanf(" %s", author);
    int found = 0;
    for (int i = 0; i < count; i++) 
	{
        if (strcmp(books[i].B_author, author) == 0) 
		{
            printf("Title: %s | Category: %s | Price: %.2lf | Rating: %s\n",
                   books[i].B_title, books[i].B_category, books[i].B_price, books[i].B_rating);
            found = 1;
        }
    }
    if (!found) printf("No books found for this author.\n");
}

void showCategoryBooks() 
{
    char category[50];
    printf("Enter Category: ");
    scanf(" %s", category);
    int found = 0;
    for (int i = 0; i < count; i++)
	 {
        if (strcmp(books[i].B_category, category) == 0) 
		{
            printf("Title: %s | Author: %s | Price: %.2lf | Rating: %s\n",
                   books[i].B_title, books[i].B_author, books[i].B_price, books[i].B_rating);
            found = 1;
        }
    }
    if (!found) printf("No books found in this category.\n");
}

void displaySortedBooks() 
{
    Book temp;
    for (int i = 0; i < count - 1; i++) 
	{
        for (int j = i + 1; j < count; j++) 
		{
            if (books[i].B_price < books[j].B_price)
			 {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("\nBooks Sorted by Price :\n");
    for (int i = 0; i < count; i++) 
	{
        printf("Title: %s | Price: %.2lf | Rating: %s\n",
               books[i].B_title, books[i].B_price, books[i].B_rating);
    }
}

void displayTopBooks() 
{
    if (count == 0) 
	{
        printf("No books available.\n");
        return;
    }
    displaySortedBooks();
    printf("\nTop 3 Books:\n");
    for (int i = 0; i < count && i < 3; i++)
	 {
        printf("Title: %s | Price: %.2lf | Rating: %s\n",
               books[i].B_title, books[i].B_price, books[i].B_rating);
    }
}

