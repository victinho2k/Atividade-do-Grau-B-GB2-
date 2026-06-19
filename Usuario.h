#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario {
protected:
    string nome;
    int id;

public:
    Usuario(string n, int i);

    string getNome();

    virtual void ExibirTipoUsuario();
    virtual string getTipo();
};

#endif
