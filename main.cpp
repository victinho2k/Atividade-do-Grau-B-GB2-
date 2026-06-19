//Nomes:
//Bernasrdo Lazzari
//Victor mingues heinzmann
//Vitor cockham


#include <iostream>
#include "Livro.h"
#include "Aluno.h"
#include "Professor.h"
#include "Emprestimo.h"
using namespace std;

int main() {

    cout << "===== CADASTRO DE LIVROS =====" << endl;
    Livro livro1("Introducao a POO", "Bernardo Lazzari", "111-222-333");
    Livro livro2("Algoritmos em C++", "Victor Heinzmann", "444-555-666");

    livro1.ExibirInformacoes();
    cout << "---------------------------------" << endl;
    livro2.ExibirInformacoes();
    cout << endl;

    cout << "===== CADASTRO DE USUARIOS =====" << endl;
    Aluno aluno1("Vitor Cockham", 1, "Ciencia da Computacao");
    Professor professor1("Maria Adelina", 2, "Computacao");

    aluno1.ExibirTipoUsuario();
    cout << "---------------------------------" << endl;
    professor1.ExibirTipoUsuario();
    cout << endl;

    cout << "===== EMPRESTIMO DE LIVROS =====" << endl;

    if (livro1.getDisponivel() == true) {
        livro1.Emprestar();
        Emprestimo emp1(&livro1, &aluno1, "10/04/2026", "20/04/2026");
        emp1.ExibirResumoEmprestimo();
    } else {
        cout << "O livro nao esta disponivel." << endl;
    }
    cout << endl;

    if (livro2.getDisponivel() == true) {
        livro2.Emprestar();
        Emprestimo emp2(&livro2, &professor1, "12/04/2026", "30/04/2026");
        emp2.ExibirResumoEmprestimo();
    } else {
        cout << "O livro nao esta disponivel." << endl;
    }
    cout << endl;

    cout << "===== TESTANDO LIVRO INDISPONIVEL =====" << endl;
    livro1.Emprestar();
    cout << endl;

    cout << "===== DEVOLUCAO DE LIVRO =====" << endl;
    livro1.Devolver();
    cout << "Situacao atual do livro 1:" << endl;
    livro1.ExibirInformacoes();
    cout << endl;

    cout << "===== EMPRESTANDO NOVAMENTE APOS DEVOLUCAO =====" << endl;
    if (livro1.getDisponivel() == true) {
        livro1.Emprestar();
        Emprestimo emp3(&livro1, &professor1, "21/04/2026", "01/05/2026");
        emp3.ExibirResumoEmprestimo();
    }

    return 0;
}
