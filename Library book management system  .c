#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
  char title[100];
  char author[100];
  int isbn;
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
  if (bookCount < MAX_BOOKS) {
    struct Book newBook;

    printf("Enter book title: ");
    scanf(" %[^\n]", newBook.title);

    printf("Enter book author: ");
    scanf(" %[^\n]", newBook.author);

    printf("Enter book ISBN: ");
    scanf("%d", &newBook.isbn);

    library[bookCount] = newBook;
    bookCount++;
    printf("Book added successfully!\n");
  } else {
    printf("Library is full. Cannot add more books.\n");
  }
}

void searchBook() {
  int isbn, found = 0;
  printf("Enter ISBN of the book to search: ");
  scanf("%d", &isbn);

  for (int i = 0; i < bookCount; i++) {
    if (library[i].isbn == isbn) {
      printf("Book found!\n");
      printf("Title: %s\n", library[i].title);
      printf("Author: %s\n", library[i].author);
      printf("ISBN: %d\n", library[i].isbn);
      found = 1;
      break;
    }
  }
  if (!found) {
    printf("Book not found.\n");
  }
}

void deleteBook() {
  int isbn, found = 0;
  printf("Enter ISBN of the book to delete: ");
  scanf("%d", &isbn);

  for (int i = 0; i < bookCount; i++) {
    if (library[i].isbn == isbn) {
      found = 1;
      // Shift remaining books to fill the gap
      for (int j = i; j < bookCount - 1; j++) {
        library[j] = library[j + 1];
      }
      bookCount--;
      printf("Book deleted successfully!\n");
      break;
    }
  }
  if (!found) {
    printf("Book not found.\n");
  }
}

void displayBooks() {
  if (bookCount == 0) {
    printf("No books in the library.\n");
  } else {
    printf("Library Books:\n");
    for (int i = 0; i < bookCount; i++) {
      printf("Book %d:\n", i + 1);
      printf("Title: %s\n", library[i].title);
      printf("Author: %s\n", library[i].author);
      printf("ISBN: %d\n\n", library[i].isbn);
    }
  }
}

int main() {
  int choice;

  do {
    printf("\nBook Management System\n");
    printf("1. Add Book\n");
    printf("2. Search Book\n");
    printf("3. Delete Book\n");
    printf("4. Display Books\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addBook();
        break;
      case 2:
        searchBook();
        break;
      case 3:
        deleteBook();
        break;
      case 4:
        displayBooks();
        break;
      case 5:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice.\n");
    }
  } while (choice != 5);

  return 0;
}
