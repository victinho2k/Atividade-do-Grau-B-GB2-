#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Usuario.h"

class Professor : public Usuario {
private:
    string departamento;

public:
    Professor(string n, int i, string d);

    void ExibirTipoUsuario();
    string getTipo();
};

#endif
