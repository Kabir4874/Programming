#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book
{
    char book_id[20];
    char book_name[100];
    char author[50];
    struct Book *next;
};
struct Book *head = NULL;
void addBook()
{
    struct Book *newBook = (struct Book *)malloc(sizeof(struct Book));
    printf("Enter Book ID: ");
    scanf("%s", newBook->book_id);
    printf("Enter Book Name: ");
    scanf(" %[^\n]", newBook->book_name);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", newBook->author);
    newBook->next = NULL;

    if (head == NULL)
    {
        head = newBook;
    }
    else
    {
        struct Book *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newBook;
    }

    printf("Book added successfully!\n");
}
void removeBook()
{
    if (head == NULL)
    {
        printf("Library is empty\n");
        return;
    }

    char book_id[20];
    printf("Enter Book ID to remove: ");
    scanf("%s", book_id);

    struct Book *current = head;
    struct Book *prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->book_id, book_id) == 0)
        {
            if (prev == NULL)
            {
                head = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            free(current);
            printf("Book with ID %s removed\n", book_id);
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("Book with ID %s not found\n", book_id);
}
void displayBooks()
{
    if (head == NULL)
    {
        printf("Library is empty\n");
        return;
    }

    struct Book *current = head;
    while (current != NULL)
    {
        printf("Book ID: %s\n", current->book_id);
        printf("Book Name: %s\n", current->book_name);
        printf("Author: %s\n", current->author);
        printf("\n");
        current = current->next;
    }
}
void searchBook()
{
    if (head == NULL)
    {
        printf("Library is empty\n");
        return;
    }

    char search_key[100];
    printf("Enter Book ID or Book Name to search: ");
    scanf(" %[^\n]", search_key);

    struct Book *current = head;
    int found = 0;

    while (current != NULL)
    {
        if (strcmp(current->book_id, search_key) == 0 || strstr(current->book_name, search_key) != NULL)
        {
            printf("Book ID: %s\n", current->book_id);
            printf("Book Name: %s\n", current->book_name);
            printf("Author: %s\n", current->author);
            printf("\n");
            found = 1;
        }
        current = current->next;
    }

    if (!found)
    {
        printf("Book not found\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Display Books\n");
        printf("4. Search Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            removeBook();
            break;
        case 3:
            displayBooks();
            break;
        case 4:
            searchBook();
            break;
        case 5:
            printf("Exiting Library Management System\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
