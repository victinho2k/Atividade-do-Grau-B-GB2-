#include <iostream>
#include "Usuario.h"
using namespace std;

Usuario::Usuario(string n, int i) {
    nome = n;
    id = i;
}

string Usuario::getNome() {
    return nome;
}

void Usuario::ExibirTipoUsuario() {
    cout << "Usuario generico" << endl;
}

string Usuario::getTipo() {
    return "Usuario";
}
