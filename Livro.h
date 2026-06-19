#ifndef LIVRO_H
#define LIVRO_H

#include <string>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    string isbn;
    bool disponivel;

public:
    Livro(string t, string a, string i);

    string getTitulo();
    bool getDisponivel();

    void Emprestar();
    void Devolver();
    void ExibirInformacoes();
};

#endif
