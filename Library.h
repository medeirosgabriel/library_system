#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include <iostream>
#include <string.h>
#include <fstream>
#include "Book.h"

class Library {

public:
    Library();
    void addBook(std::string isbn, std::string autor, std::string editora,
        std::string categoria, std::string formato, std::string anoPubl);
    void searchByABook(std::string isbn);
    void showAllBooks();
    void updateABook(std::string isbn, std::string autor, std::string editora,
        std::string categoria, std::string formato, std::string anoPubl);
    void exportData();
    void quit();

private:
    Book books[100];
    int quantity = 0;
};

Library::Library() {
    this -> quantity = 0;
}

void Library::addBook(std::string isbn, std::string autor, std::string editora,
        std::string categoria, std::string formato, std::string anoPubl) {
    
    Book book = Book(isbn, autor, editora, categoria, formato, anoPubl);
    this -> books[quantity] = book;
    this -> quantity ++;
}

void Library::searchByABook(std::string isbn) {
    Book wanted;
    for (int i = 0; i < sizeof(this -> books)/sizeof(Book); i++) {
        if (books[i].getIsbn().compare(isbn) == 0) {
            wanted = books[i];
            wanted.show();
            break;
        }
    }
}

void Library::showAllBooks() {
    for (int i = 0; i < this -> quantity; i++) {
        books[i].show();
        std::cout << std::endl;
    }
}

void Library::updateABook(std::string isbn, std::string autor, std::string editora,
        std::string categoria, std::string formato, std::string anoPubl) {
    
    Book wanted;
    for (int i = 0; i < sizeof(this -> books)/sizeof(Book); i++) {
        if (books[i].getIsbn().compare(isbn) == 0) {
            wanted = books[i];
            break;
        }
    }

    wanted.setIsbn(isbn);
    wanted.setAutor(autor);
    wanted.setEditora(editora);
    wanted.setCategoria(categoria);
    wanted.setFormato(formato);
    wanted.setAnoPubl(anoPubl);

}

void Library::exportData() {
    std::ofstream MyFile("books.txt");
    for (int i = 0; i < this -> quantity; i++) {
        MyFile << books[i].getInfo();
    }
    MyFile.close();
}

#endif