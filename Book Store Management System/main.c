// C program for the Book Store Management System
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
// Create Structure of Book Store
struct bookStore {
    char bookName[20];
    char authorName[20];
    int pages;
    float price;
};
  
// Driver Code
int main()
{
    // Create a instance
    struct bookStore store[100];
  
    char authorName[30];
  
    // Keep the track of the number of books available in the Book Store
    int i = 0, input = 0, count = 0;
  
    // Iterate the loop
    while (input != 5) {
  
        printf("\n\n********###### Welcome to our Book Store #####********\n");
        printf("\nA Project by Praneet, Satvik, Pratham & Parth \n");
        
        printf("\n\n1. Add Book information \n2. Display Book information \n3. List all the Books by a particular author\n4. List the total number of Books in the Book Store\n5. Exit");
  
        // Enter the book details
        printf("\n\nEnter one of the above: ");
        scanf("%d", &input);
  
        // Process the input
        switch (input) {
  
        // Add book
            case 1:
  
                printf("Enter the Book Name = ");
                scanf("%s", store[i].bookName);
  
                printf("Enter the Author's Name = ");
                scanf("%s", store[i].authorName);
  
                printf("Enter the number of Pages = ");
                scanf("%d", &store[i].pages);
                
                printf("Enter the Price of the Book = ");
                scanf("%f", &store[i].price);
                count++;
                
                break;
                
        // Print book information
            case 2:
                printf("You have entered the following information\n");
                for (i = 0; i < count; i++) {
  
                    printf("\n Book Name = %s", store[i].bookName);
                    printf("\n Author name = %s", store[i].authorName);
                    printf("\n Pages = %d", store[i].pages);
                    printf("\n Price = %f\n", store[i].price);
                }
                break;
  
        // Take the author name as input
            case 3:
                printf("Enter Author's Name : ");
                scanf("%s", authorName);
                for (i = 0; i < count; i++) {
                    if (strcmp(authorName,store[i].authorName) == 0){
                        printf("\n Book Name = %s\n Author Name = %s\n Number of pages = %d\n Cost = %f", store[i].bookName, store[i].authorName, store[i].pages, store[i].price);
                    }
                }
                break;
  
        // Print total count
            case 4:
                printf("\n No of books in the Book Store : %d", count);
                break;
                
            case 5:
                exit(0);
            }
        }
    return 0;
}
