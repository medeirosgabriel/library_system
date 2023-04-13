#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <iostream>

class Book {

public:
    Book();
    Book(std::string isbn, std::string autor, std::string editora,
        std::string categoria, std::string formato, std::string anoPubl);
    
    std::string getInfo();
    void show();
    void setIsbn(std::string isbn);
    void setAutor(std::string autor);
    void setEditora(std::string editora);
    void setCategoria(std::string categoria);
    void setFormato(std::string formato);
    void setAnoPubl(std::string anoPubl);
    std::string getIsbn();


private:
    std::string isbn;
    std::string autor;
    std::string editora;
    std::string categoria;
    std::string formato;
    std::string anoPubl;
};

Book::Book(){};

Book::Book(std::string isbn, std::string autor, std::string editora,
        std::string categoria, std::string formato, std::string anoPubl) {

    this -> isbn = isbn;
    this -> autor = autor;
    this -> editora = editora;
    this -> categoria = categoria;
    this -> formato = formato;
    this -> anoPubl = anoPubl;
}

void Book::show() {
    std::cout << "ISBN: " << this -> isbn << std::endl;
    std::cout << "Autor: " << this -> autor << std::endl;
    std::cout << "Editora: " << this -> editora << std::endl;
    std::cout << "Categoria: " << this -> categoria << std::endl;
    std::cout << "Formato: " << this -> formato << std::endl;
    std::cout << "Ano_Publ: " << this -> anoPubl << std::endl;
    std::cout << "--------------------------------" << std::endl;
}

std::string Book::getInfo() {
    std::string isbn = "ISBN: " + this -> isbn;
    std::string autor = "Autor: " + this -> autor;
    std::string editora = "Editora: " + this -> editora;
    std::string categoria = "Categoria: " + this -> categoria;
    std::string fomrato = "Formato: " + this -> formato;
    std::string anoPubl = "Ano_Publ: " + this -> anoPubl;
    std::string info =  isbn + "\n" + autor + "\n" + editora + "\n" + 
                    categoria + "\n" + formato + "\n" + anoPubl + "\n" + 
                    "--------------------------------" + "\n";
    return info;
}

void Book::setIsbn(std::string isbn) {
    this -> isbn = isbn;
}

void Book::setAutor(std::string autor) {
    this -> autor = autor;
}

void Book::setEditora(std::string editora) {
    this -> editora = editora;
}

void Book::setCategoria(std::string categoria) {
    this -> categoria = categoria;
}

void Book::setFormato(std::string formato) {
    this -> formato = formato;
}

void Book::setAnoPubl(std::string anoPubl) {
    this -> anoPubl = anoPubl;
}

std::string Book::getIsbn() {
    return this -> isbn;
}

#endif // BOOK_H_INCLUDE