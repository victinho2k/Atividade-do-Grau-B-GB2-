#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <string>
#include "Livro.h"
#include "Usuario.h"
using namespace std;

class Emprestimo {
private:
    Livro* livro;
    Usuario* usuario;
    string dataEmprestimo;
    string dataDevolucao;

public:
    Emprestimo(Livro* l, Usuario* u, string dataEmp, string dataDev);

    void ExibirResumoEmprestimo();
};

#endif
