#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"

class Aluno : public Usuario {
private:
    string curso;

public:
    Aluno(string n, int i, string c);

    void ExibirTipoUsuario();
    string getTipo();
};

#endif
