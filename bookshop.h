#include <iostream>
#include "book.h"
using namespace std;

class BookShop {
private:
    int noOfBooksAdded = 0;
    int max = 100;
    Book bookCollection[100];
public:
    void addBook(const string& title, const string& author) {
        if (noOfBooksAdded <= max) {
            bookCollection[noOfBooksAdded] = Book(title, author);
            noOfBooksAdded++;
            cout << "Book added to collection" << endl;
        } else {
            cout << "Max capacity exceeded" << endl;
        }
    }

    void displayBooks() {
        for (int i = 0; i < noOfBooksAdded; i++) {
            cout << "Book " << i + 1 << ": " << bookCollection[i].getTitle() << " by " << bookCollection[i].getAuthor() << endl;
        }
    }
};