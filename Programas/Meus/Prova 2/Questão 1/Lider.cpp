#include "Lider.h"

Lider::Lider(std::string nome, std::string CPF, double salario, std::string setor, Hospital* hospital) :
    Enfermeiro(nome, CPF, salario, hospital), hospital(hospital) {
        setSetor(setor);
}

Lider::~Lider() {}

void Lider::setSetor(std::string setor) {
    this->setor = setor;
}

double Lider::getSalario() const {
    return Enfermeiro::getSalario() * 1.4;
}

std::string Lider::getSetor() const {
    return this->setor;
}

void Lider::imprime() const {
    std::cout << "[Lider]" << std::endl;
    std::cout << "Setor: " << getSetor() << std::endl;
    Enfermeiro::imprime();
}
