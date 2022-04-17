#include "Enfermeiro.h"

Enfermeiro::Enfermeiro(int CPF, string nome, int CRE) :
Funcionario(CPF, nome), CRE(CRE) {
}

Enfermeiro::~Enfermeiro() {
}

string Enfermeiro::getProfissao() const { // implementação do método abstrato do pai
    return "Enfermeiro";
}

int Enfermeiro::getCRE() const {
    return CRE;
}

void Enfermeiro::imprime() const {
    Funcionario::imprime();
    cout << "CRE : " << CRE << endl;
}