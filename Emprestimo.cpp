#include <iostream>
#include "Emprestimo.h"
using namespace std;

Emprestimo::Emprestimo(Livro* l, Usuario* u, string dataEmp, string dataDev) {
    livro = l;
    usuario = u;
    dataEmprestimo = dataEmp;
    dataDevolucao = dataDev;
}

void Emprestimo::ExibirResumoEmprestimo() {
    cout << "Resumo do Emprestimo:" << endl;
    cout << "Livro: " << livro->getTitulo() << endl;
    cout << "Usuario: " << usuario->getNome()
         << " (" << usuario->getTipo() << ")" << endl;
    cout << "Data do Emprestimo: " << dataEmprestimo << endl;
    cout << "Data de Devolucao: " << dataDevolucao << endl;
}
