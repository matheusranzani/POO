#include "Funcionario.h"

Funcionario::Funcionario(int CPF, string nome) :
CPF(CPF), nome(nome) {
}

Funcionario::~Funcionario() {
}

void Funcionario::imprime() const {
    cout << "Nome : " << nome << endl;
    cout << "CPF : " << CPF << endl;
    cout << "Profissão : " << getProfissao() << endl;
}

bool Funcionario::comparaNome(const Funcionario* f1, const Funcionario* f2) {
    return f1->nome < f2->nome; // classe string sobrecarregou o operador "<" (ordem alfabética)
}

bool Funcionario::comparaCPF(const Funcionario* f1, const Funcionario* f2) {
    return f1->CPF < f2->CPF; // operador "<" (inteiros)
}