#include "Book.h"


Book::Book(std::string title, std::string author, std::string publicationDate) 
    : title(title), author(author), publicationDate(publicationDate) {}

std::string Book::getTitle() {
    return title;
}
std::string Book::getAuthor() {
    return author;
}

std::string Book::getPublicationDate() {
    return publicationDate;
}

bool Book::operator<(const Book& otherBook) const {
    
    return author < otherBook.author;
}


void Book::printBook() const {
    std::cout << "Title: " << title << "\nAuthor: " << author << "\nPublication Date: " << publicationDate << std::endl;
}