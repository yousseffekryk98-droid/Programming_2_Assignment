#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[100];
    char author[100];
    double price;
    double discountPercent;
    double finalPrice;
};

Book calcFinalPrice(Book b) {
    b.finalPrice = b.price - (b.price * b.discountPercent / 100);
    return b;
}

int main() {
    Book book;
    
    cout << "Enter book ID: ";
    cin >> book.id;
    
    cin.ignore();
    cout << "Enter book title: ";
    cin.getline(book.title, 100);
    
    cout << "Enter book author: ";
    cin.getline(book.author, 100);
    
    cout << "Enter book price: ";
    cin >> book.price;
    
    cout << "Enter discount percent: ";
    cin >> book.discountPercent;
    
    book = calcFinalPrice(book);
    
    cout << "--- Book Information ---" << endl;
    cout << "ID: " << book.id << endl;
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Price: " << book.price << endl;
    cout << "Discount: " << book.discountPercent << "%" << endl;
    cout << "Final Price: " << book.finalPrice << endl;
    
    return 0;
}
