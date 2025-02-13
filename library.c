#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_MEMBERS 100

// Structures
typedef struct {
    int id;
    char title[50];
    char author[50];
    int quantity;
    int available;
} Book;

typedef struct {
    int id;
    char name[50];
    char phone[15];
} Member;

typedef struct {
    int bookId;
    int memberId;
    char issueDate[11];
    char returnDate[11];
    int isReturned;
} Transaction;

// Global variables
Book books[MAX_BOOKS];
Member members[MAX_MEMBERS];
Transaction transactions[MAX_BOOKS];
int bookCount = 0, memberCount = 0, transactionCount = 0;

// Function prototypes
void addBook();
void displayBooks();
void addMember();
void displayMembers();
void issueBook();
void returnBook();
void saveDataToFile();
void loadDataFromFile();
int findBookById(int id);
int findMemberById(int id);

// Main menu
int main() {
    int choice;
    loadDataFromFile(); // Load data from file at the start

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Add Member\n");
        printf("4. Display All Members\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: addMember(); break;
            case 4: displayMembers(); break;
            case 5: issueBook(); break;
            case 6: returnBook(); break;
            case 7: saveDataToFile(); printf("Data saved. Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}

// Function definitions
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &books[bookCount].id);
    printf("Enter book title: ");
    getchar(); // Consume newline character
    fgets(books[bookCount].title, 50, stdin);
    books[bookCount].title[strcspn(books[bookCount].title, "\n")] = '\0'; // Remove newline
    printf("Enter author name: ");
    fgets(books[bookCount].author, 50, stdin);
    books[bookCount].author[strcspn(books[bookCount].author, "\n")] = '\0';
    printf("Enter quantity: ");
    scanf("%d", &books[bookCount].quantity);

    books[bookCount].available = books[bookCount].quantity;
    bookCount++;

    printf("Book added successfully!\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books available in the library.\n");
        return;
    }

    printf("\nBooks in the Library:\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\tAvailable\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d\t%s\t\t%s\t\t%d\t\t%d\n", books[i].id, books[i].title, books[i].author, books[i].quantity, books[i].available);
    }
}

void addMember() {
    if (memberCount >= MAX_MEMBERS) {
        printf("Cannot add more members.\n");
        return;
    }

    printf("Enter member ID: ");
    scanf("%d", &members[memberCount].id);
    printf("Enter member name: ");
    getchar(); // Consume newline character
    fgets(members[memberCount].name, 50, stdin);
    members[memberCount].name[strcspn(members[memberCount].name, "\n")] = '\0';
    printf("Enter member phone: ");
    fgets(members[memberCount].phone, 15, stdin);
    members[memberCount].phone[strcspn(members[memberCount].phone, "\n")] = '\0';

    memberCount++;
    printf("Member added successfully!\n");
}

void displayMembers() {
    if (memberCount == 0) {
        printf("No members found.\n");
        return;
    }

    printf("\nMembers:\n");
    printf("ID\tName\t\tPhone\n");
    for (int i = 0; i < memberCount; i++) {
        printf("%d\t%s\t\t%s\n", members[i].id, members[i].name, members[i].phone);
    }
}

void issueBook() {
    int bookId, memberId;

    printf("Enter book ID to issue: ");
    scanf("%d", &bookId);
    int bookIndex = findBookById(bookId);
    if (bookIndex == -1) {
        printf("Book not found.\n");
        return;
    }

    if (books[bookIndex].available == 0) {
        printf("No copies of the book are available.\n");
        return;
    }

    printf("Enter member ID: ");
    scanf("%d", &memberId);
    int memberIndex = findMemberById(memberId);
    if (memberIndex == -1) {
        printf("Member not found.\n");
        return;
    }

    printf("Enter issue date (DD/MM/YYYY): ");
    getchar();
    fgets(transactions[transactionCount].issueDate, 11, stdin);
    transactions[transactionCount].issueDate[strcspn(transactions[transactionCount].issueDate, "\n")] = '\0';

    transactions[transactionCount].bookId = bookId;
    transactions[transactionCount].memberId = memberId;
    transactions[transactionCount].isReturned = 0;

    books[bookIndex].available--;
    transactionCount++;

    printf("Book issued successfully!\n");
}

void returnBook() {
    int bookId, memberId;

    printf("Enter book ID to return: ");
    scanf("%d", &bookId);
    int bookIndex = findBookById(bookId);
    if (bookIndex == -1) {
        printf("Book not found.\n");
        return;
    }

    printf("Enter member ID: ");
    scanf("%d", &memberId);
    int memberIndex = findMemberById(memberId);
    if (memberIndex == -1) {
        printf("Member not found.\n");
        return;
    }

    for (int i = 0; i < transactionCount; i++) {
        if (transactions[i].bookId == bookId && transactions[i].memberId == memberId && transactions[i].isReturned == 0) {
            printf("Enter return date (DD/MM/YYYY): ");
            getchar();
            fgets(transactions[i].returnDate, 11, stdin);
            transactions[i].returnDate[strcspn(transactions[i].returnDate, "\n")] = '\0';

            transactions[i].isReturned = 1;
            books[bookIndex].available++;

            printf("Book returned successfully!\n");
            return;
        }
    }

    printf("No record found for this book and member.\n");
}

int findBookById(int id) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) return i;
    }
    return -1;
}

int findMemberById(int id) {
    for (int i = 0; i < memberCount; i++) {
        if (members[i].id == id) return i;
    }
    return -1;
}

void saveDataToFile() {
    FILE *file = fopen("library_data.bin", "wb");
    if (file == NULL) {
        printf("Error saving data.\n");
        return;
    }

    fwrite(&bookCount, sizeof(int), 1, file);
    fwrite(books, sizeof(Book), bookCount, file);

    fwrite(&memberCount, sizeof(int), 1, file);
    fwrite(members, sizeof(Member), memberCount, file);

    fwrite(&transactionCount, sizeof(int), 1, file);
    fwrite(transactions, sizeof(Transaction), transactionCount, file);

    fclose(file);
}

void loadDataFromFile() {
    FILE *file = fopen("library_data.bin", "rb");
    if (file == NULL) return; // No file to load

    fread(&bookCount, sizeof(int), 1, file);
    fread(books, sizeof(Book), bookCount, file);

    fread(&memberCount, sizeof(int), 1, file);
    fread(members, sizeof(Member), memberCount, file);

    fread(&transactionCount, sizeof(int), 1, file);
    fread(transactions, sizeof(Transaction), transactionCount, file);

    fclose(file);
}