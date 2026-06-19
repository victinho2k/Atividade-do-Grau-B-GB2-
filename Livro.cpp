#include <iostream>
#include "Livro.h"
using namespace std;

Livro::Livro(string t, string a, string i) {
    titulo = t;
    autor = a;
    isbn = i;
    disponivel = true;
}

string Livro::getTitulo() {
    return titulo;
}

bool Livro::getDisponivel() {
    return disponivel;
}

void Livro::Emprestar() {
    if (disponivel == true) {
        disponivel = false;
        cout << "Livro emprestado com sucesso!" << endl;
    } else {
        cout << "Livro indisponivel no momento." << endl;
    }
}

void Livro::Devolver() {
    disponivel = true;
    cout << "Livro devolvido com sucesso! Agora esta disponivel novamente." << endl;
}

void Livro::ExibirInformacoes() {
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "ISBN: " << isbn << endl;
    if (disponivel == true) {
        cout << "Disponivel: Sim" << endl;
    } else {
        cout << "Disponivel: Nao" << endl;
    }
}
