#include "Enfermeiro.h"

Enfermeiro::Enfermeiro(int CPF, string nome, int CRE) :
Funcionario(CPF, nome), CRE(CRE) {
}

Enfermeiro::~Enfermeiro() {
}

void Enfermeiro::imprime() const {
    Funcionario::imprime();
    cout << "CRE : " << CRE << endl;
}

string Enfermeiro::getProfissao() const {
    return "Enfermeiro";
}