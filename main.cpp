#include <iostream>
#include "Library.h"

using namespace std;

void menu() {
    cout << "***************************************************" << endl;
    cout << "* Opcoes:                                         *" << endl;
    cout << "* 1 - Inserir um livro                            *" << endl;
    cout << "* 2 - Pesquisar um livro                          *" << endl;
    cout << "* 3 - Mostrar dados de todos os livros            *" << endl;
    cout << "* 4 - Atualizar Dados de um livro                 *" << endl;
    cout << "* 5 - Exportar dados dos livros para um ficheiro  *" << endl;
    cout << "* 6 - Sair                                        *" << endl;
    cout << "***************************************************" << endl;
    cout << "* Selecione uma opcao: ";
}

int main() {

    Library *library = new Library();

    while (true) {

        menu();
        string opcao;
        cin >> opcao;

        system("clear");

        if (opcao.compare("1") == 0) {
            
            string isbn;
            string autor;
            string editora;
            string categoria;
            string formato;
            string anoPubl;

            cout << "Digite ISBN: ";
            cin >> isbn;
            cout << "Digite o nome do autor: ";
            cin >> autor;
            cout << "Digite o nome da editora: ";
            cin >> editora;
            cout << "Digite o nome da categoria: ";
            cin >> categoria;
            cout << "Digite o nome do formato: ";
            cin >> formato;
            cout << "Digite o ano de publicacao: ";
            cin >> anoPubl;

            library -> addBook(isbn, autor, editora, categoria, formato, anoPubl);
            
        } else if (opcao.compare("2") == 0) {

            char isbn[101];
            cout << "Type ISBN: ";
            cout << endl;
            scanf ("%100s", isbn);
            library -> searchByABook(isbn);
            cin.ignore();

        } else if (opcao.compare("3") == 0) {
            
            library -> showAllBooks();
            cin.ignore();

        } else if (opcao.compare("4") == 0) {

            string isbn;
            string autor;
            string editora;
            string categoria;
            string formato;
            string anoPubl;

            cout << "Digite ISBN: ";
            cin >> isbn;
            cout << "Digite o nome do autor: ";
            cin >> autor;
            cout << "Digite o nome da editora: ";
            cin >> editora;
            cout << "Digite o nome da categoria: ";
            cin >> categoria;
            cout << "Digite o nome do formato: ";
            cin >> formato;
            cout << "Digite o ano de publicacao: ";
            cin >> anoPubl;

            library -> updateABook(isbn, autor, editora, categoria, formato, anoPubl);

        } else if (opcao.compare("5") == 0) {

            // Vou fazer

        } else if (opcao.compare("6") == 0) {
            break;
        }
    }
}