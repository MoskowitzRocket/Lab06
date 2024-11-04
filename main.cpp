#include "Book.h"
#include "exceptions.h"
#include <vector>
#include <algorithm>

void addBooks(std::vector<Book> &books) {
    std::string title, author, date;
    std::cout << "Enter the title of the book: ";
    std::getline(std::cin >> std::ws, title);
    std::cout << "Enter the author of the book: ";
    std::getline(std::cin, author);
    std::cout << "Enter the publication date of the book: ";
    std::getline(std::cin, date);
    books.push_back(Book(title, author, date));
    std::cout << "Book added successfully!" << std::endl;
}

void printBooksSortedByAuthor(std::vector<Book> &books) {
    if (books.empty()){
        std::cout << "No books to print!\n";
    }

    std::sort(books.begin(), books.end());
    std::cout << "Books sorted by author: \n";
    for (const auto& book : books) {
        book.printBook();
    }
}


int main(){

  std::vector<Book> books;
    int choice;

    do {
        std::cout << "\nSelect from the following choices:\n";
        std::cout << "1. Add new book\n";
        std::cout << "2. Print listing sorted by author\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        try {
            if (choice != 1 && choice != 2 && choice != 3) {
                throw WrongDataType();
            }
        }catch (WrongDataType &e) {
            std::cout << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addBooks(books);
                break;
            case 2:
                printBooksSortedByAuthor(books);
                break;
            case 3:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                
        }
    } while (choice != 3);

    return 0;


}