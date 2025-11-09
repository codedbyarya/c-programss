#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function to display book details
void display(struct Book b) {
    printf("\nBook ID: %d", b.book_id);
    printf("\nTitle: %s", b.title);
    printf("\nAuthor: %s", b.author);
    printf("\nPrice: %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter book id: ");
    scanf("%d", &b1.book_id);
    printf("Enter title: ");
    scanf("%s", b1.title);
    printf("Enter author: ");
    scanf("%s", b1.author);
    printf("Enter price: ");
    scanf("%f", &b1.price);

    display(b1);
    return 0;
}
