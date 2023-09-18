#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    Book(string t, string a, double p) : title(t), author(a), price(p) {}
};

class Bookshop {
private:
    vector<Book> inventory;

public:
    void addBook(string title, string author, double price) {
        Book book(title, author, price);
        inventory.push_back(book);
    }

    void displayInventory() {
        cout << "Book Inventory:" << endl;
        cout << "Title\tAuthor\tPrice" << endl;
        for (const Book &book : inventory) {
            cout << book.title << "\t" << book.author << "\t" << book.price << endl;
        }
    }
};

int main() {
    Bookshop bookshop;

    bookshop.addBook("The Great Gatsby", "F. Scott Fitzgerald", 10.99);
    bookshop.addBook("To Kill a Mockingbird", "Harper Lee", 12.50);
    bookshop.addBook("1984", "George Orwell", 9.99);

    bookshop.displayInventory();

    return 0;
}