#include <iostream>
#include "Aluno.h"
using namespace std;

Aluno::Aluno(string n, int i, string c) : Usuario(n, i) {
    curso = c;
}

void Aluno::ExibirTipoUsuario() {
    cout << "Nome: " << nome << " | ID: " << id << endl;
    cout << "Tipo: Aluno | Curso: " << curso << endl;
}

string Aluno::getTipo() {
    return "Aluno";
}
