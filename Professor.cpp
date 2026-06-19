#include <iostream>
#include "Professor.h"
using namespace std;

Professor::Professor(string n, int i, string d) : Usuario(n, i) {
    departamento = d;
}

void Professor::ExibirTipoUsuario() {
    cout << "Nome: " << nome << " | ID: " << id << endl;
    cout << "Tipo: Professor | Departamento: " << departamento << endl;
}

string Professor::getTipo() {
    return "Professor";
}
