//3.	Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. 
#include <stdio.h>
struct Book {
    int book_id;
    char title[40];
    char author_name[30];
    int price;
};
void printDetails(struct Book b);
int main() {
    struct Book b1 = {5900, "Math", "Ravish Gupta", 450};
    printDetails(b1);
    return 0;
}
void printDetails(struct Book b)
{
    printf("\nBook Details:\n");
    printf("Book ID      : %d\n", b.book_id);
    printf("Title        : %s\n", b.title);
    printf("Author Name  : %s\n", b.author_name);
    printf("Price        : %d\n", b.price);
}
