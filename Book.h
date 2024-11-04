#include <string>
#include <iostream>

class Book {
    private:
        std::string title{};
        std::string author{};
        std::string publicationDate{};

    public:
        Book(std::string title, std::string author, std::string publicationDate);
        std::string getTitle();
        std::string getAuthor();
        std::string getPublicationDate();

        bool operator<(const Book& otherBook) const;


        void printBook() const;

};