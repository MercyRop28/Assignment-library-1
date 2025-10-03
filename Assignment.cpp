#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool is_borrowed; // Status: true if borrowed, false if available

public:
    // Constructor
    Book(const std::string& t, const std::string& a, const std::string& i)
        : title(t), author(a), isbn(i), is_borrowed(false) {}

    // Getters (Accessors)
    std::string get_title() const { return title; }
    std::string get_author() const { return author; }
    std::string get_isbn() const { return isbn; }
    bool get_status() const { return is_borrowed; }

    // Setters (Mutators) for status change
    void set_borrowed(bool status) { is_borrowed = status; }

    // Utility Method
    void display_info() const;
};#include "book.h"
#include <iostream>

void Book::display_info() const {
    std::cout << "Title: " << title 
              << " | Author: " << author 
              << " | ISBN: " << isbn
              << " | Status: " << (is_borrowed ? "Borrowed" : "Available") 
              << std::endl;
}#include "book.h"
#include <vector>
#include <iostream>

class Library {
private:
    std::vector<Book> books;
    // You'd add std::vector<User> users; here later

public:
    // Functionality 1: Add a Book
    void add_book(const Book& book) {
        books.push_back(book);
        std::cout << "Book added: " << book.get_title() << std::endl;
    }

    // Functionality 2: Remove a Book (Example using ISBN)
    bool remove_book(const std::string& isbn); 

    // Functionality 3: Search for Books (Example by Title)
    std::vector<Book*> search_by_title(const std::string& title_query);

    // Placeholder for other functionalities
    // bool borrow_book(const std::string& isbn, int user_id);
    // bool return_book(const std::string& isbn, int user_id);
    void display_all_books() const;
};